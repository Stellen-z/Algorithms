#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v{10, 20, 30, 10, 20};

    std::cout << "去重前:";
    for (auto &e : v)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    std::sort(v.begin(),v.end());
    auto it = std::unique(v.begin(),v.end());
    v.erase(it,v.end());

    std::cout << "去重后:";
    for(auto& e : v)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
