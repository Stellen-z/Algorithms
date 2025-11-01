#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <string>
#include <vector>
#include <thread>
#include <random>
#include <chrono>

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")

constexpr int  WIN_W = 350;
constexpr int  WIN_H = 80;
constexpr int  TIP_COUNT = 300;
constexpr UINT WM_THREADMSG = WM_USER + 1;

static const wchar_t* tips[] = {
    L"多喝水哦～", L"保持微笑呀", L"每天都要元气满满",
    L"记得吃水果", L"保持好心情", L"好好爱自己", L"我想你了！",
    L"梦想成真", L"期待下一次见面", L"天天开心呀",
    L"顺顺利利", L"早点休息", L"愿所有烦恼都消失",
    L"别熬夜", L"今天过得开心嘛", L"天冷了，多穿衣服"
};
static const COLORREF bgColors[] = {
    RGB(255,182,193),  // lightpink
    RGB(135,206,235),  // skyblue
    RGB(144,238,144),  // lightgreen
    RGB(230,230,250),  // lavender
    RGB(255,255,224),  // lightyellow
    RGB(221,160,221),  // plum
    RGB(255,127,80),   // coral
    RGB(255,228,196),  // bisque
    RGB(127,255,212),  // aquamarine
    RGB(255,228,225),  // mistyrose
    RGB(240,255,240),  // honeydew
    RGB(255,240,245),  // lavenderblush
    RGB(253,245,230)   // oldlace
};
inline int  rand_int(int a, int b) {
    static std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(a, b);
    return dist(rng);
}
inline COLORREF rand_color() { return bgColors[rand_int(0, sizeof(bgColors) / sizeof(COLORREF) - 1)]; }
inline const wchar_t* rand_tip() { return tips[rand_int(0, sizeof(tips) / sizeof(wchar_t*) - 1)]; }
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_CREATE:
        return 0;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);
        RECT rc; GetClientRect(hwnd, &rc);
        HBRUSH hbr = CreateSolidBrush((COLORREF)GetWindowLongPtr(hwnd, GWLP_USERDATA));
        FillRect(hdc, &rc, hbr);
        DeleteObject(hbr);
        SetBkMode(hdc, TRANSPARENT);
        HFONT hFont = CreateFontW(
            20, 0, 0, 0, FW_NORMAL, 0, 0, 0,
            DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
            CLIP_DEFAULT_PRECIS,
            CLEARTYPE_QUALITY | ANTIALIASED_QUALITY,
            DEFAULT_PITCH | FF_DONTCARE,
            L"微软雅黑"
        );
        HFONT oldFont = (HFONT)SelectObject(hdc, hFont);
        DrawTextW(hdc, (LPCWSTR)GetPropW(hwnd, L"TIP"), -1, &rc,
            DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        SelectObject(hdc, oldFont);
        DeleteObject(hFont);
        EndPaint(hwnd, &ps);
    }
                 return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hwnd, msg, wParam, lParam);
}


void thread_worker()
{

    const wchar_t* clsName = L"TipPopup";
    WNDCLASSEXW wc{ sizeof(wc) };
    wc.lpfnWndProc = WndProc;
    wc.hInstance = GetModuleHandle(nullptr);
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = clsName;
    RegisterClassExW(&wc);

    int scrW = GetSystemMetrics(SM_CXSCREEN);
    int scrH = GetSystemMetrics(SM_CYSCREEN);
    int x = rand_int(0, scrW - WIN_W);
    int y = rand_int(0, scrH - WIN_H);
    COLORREF bg = rand_color();

    HWND hwnd = CreateWindowExW(
        WS_EX_TOPMOST,
        clsName, nullptr,
        WS_POPUPWINDOW | WS_CAPTION | WS_VISIBLE,
        x, y, WIN_W, WIN_H,
        nullptr, nullptr, wc.hInstance, nullptr);
    if (!hwnd) return;


    SetProcessDPIAware();
    SetWindowPos(hwnd, nullptr, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_FRAMECHANGED);

    SetWindowLongPtr(hwnd, GWLP_USERDATA, (LONG_PTR)bg);
    SetPropW(hwnd, L"TIP", (HANDLE)rand_tip());

    MSG msg;
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    UnregisterClassW(clsName, wc.hInstance);
}


void timer_thread() {
    std::this_thread::sleep_for(std::chrono::seconds(20));
    PostMessage(HWND_BROADCAST, WM_CLOSE, 0, 0);
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    std::vector<std::thread> pool;
    pool.reserve(TIP_COUNT);

    std::thread timer(timer_thread);
    timer.detach();

    for (int i = 0; i < TIP_COUNT; ++i)
    {
        pool.emplace_back(thread_worker);
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
    for (auto& t : pool) t.join();
    return 0;
}