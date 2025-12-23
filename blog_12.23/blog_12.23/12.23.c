#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));//4
//	printf("%zd\n", sizeof a );//4
//	printf("%zd\n", sizeof(int));//4
//
//	return 0;
//}

///* strlen example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char szInput[256];
//	printf("Enter a sentence: ");
//	gets(szInput);
//	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello world!";
//	size_t ret = strlen(arr);//strlen返回值为size_t类型
//	printf("%zd\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = {'a','b','c'};//此时arr'c'后面并无'\0'，因此会一直向后查找
//	size_t ret = strlen(arr);//strlen返回值为size_t类型
//	printf("%zd\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));
//	//此处a表示整个数组，计算的是整个数组的大小，即16
//	printf("%zd\n", sizeof(a + 0));
//	//并未单独放在括号中，因此a表示首元素的地址，计算的是指针大小，即4/8
//	printf("%zd\n", sizeof(*a));
//	//a表示首元素地址，解引用后得到的是首元素1,即4
//	printf("%zd\n", sizeof(a + 1));
//	//a表示首元素地址,+1跳过一个整形元素，即为元素2的地址，计算的是地址的大小，即4/8
//	printf("%zd\n", sizeof(a[1]));
//	//a表示首元素的地址，变形一下a[1]等价于*(a+1),得到的是元素2,即4
//	printf("%zd\n", sizeof(&a));
//	//此处&a表示整个数组，取出的是整个数组的地址，表示指针，即4/8
//	printf("%zd\n", sizeof(*&a));
//	//*与&相互抵消，即为sizeof(a),数组名单独放在括号内，计算的是整个数组的大小，即16
//	printf("%zd\n", sizeof(&a + 1));
//	//将整个数组的地址取出，+1表示跳过整个数组，但还是表示指针，即4/8
//	printf("%zd\n", sizeof(&a[0]));
//	//a先于[0]结合，即&1，表示指针，即4/8
//	printf("%zd\n", sizeof(&a[0] + 1));
//	//&1后+1，表示的还是一个指针，即4/8
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(a + 0));
//	printf("%zd\n", sizeof(*a));
//	printf("%zd\n", sizeof(a + 1));
//	printf("%zd\n", sizeof(a[1]));
//	printf("%zd\n", sizeof(&a));
//	printf("%zd\n", sizeof(*&a));
//	printf("%zd\n", sizeof(&a + 1));
//	printf("%zd\n", sizeof(&a[0]));
//	printf("%zd\n", sizeof(&a[0] + 1));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zd\n", sizeof(arr));
//	//数组名单独存放，计算的是整个数组的大小，即6
//	printf("%zd\n", sizeof(arr + 0));
//	//arr表示首元素地址，+0后仍是地址，表示指针，即4/8
//	printf("%zd\n", sizeof(*arr));
//	//arr表示首元素地址，解引用后得到首元素字符a,即1
//	printf("%zd\n", sizeof(arr[1]));
//	//arr[1]等价为*(arr+1)，即首元素地址+1后解引用，得到字符b，即1
//	printf("%zd\n", sizeof(&arr));
//	//&arr表示取出整个数组的地址，表示指针，即4/8
//	printf("%zd\n", sizeof(&arr + 1));
//	//&arr表示取出整个数组的地址，+1后仍是指针，即4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));
//	//首先arr和[0]结合，得到字符a,接着&a表示将字符a的地址取出，+1后仍是地址，即4/8
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zd\n", strlen(arr));
//	//从'a'开始向后查找，一直找到/0停止，返回值为随机值
//	printf("%zd\n", strlen(arr + 0));
//	//同样从'a'开始向后查找，一直找到/0为止，返回值为随机值
//	//printf("%zd\n", strlen(*arr));
//	//arr表示数组首元素地址，解引用后得到元素字符a,非地址，不符合参数要求，即err
//	//printf("%zd\n", strlen(arr[1]));
//	//arr[1]得到元素字符b,非地址，即err
//	printf("%zd\n", strlen(&arr));
//	//&arr表示取出整个数组的地址，仍会寻找\0，返回随机值
//	printf("%zd\n", strlen(&arr + 1));
//	//&arr+1表示取出整个数组的地址后+1，跳过了整个数组，仍会寻找\0，返回随机值
//	printf("%zd\n", strlen(&arr[0] + 1));
//	//首先arr与[0]结合得到字符'a'，接着取出字符a的地址，+1后跳过字符a,从字符b开始向后查找，直到遇到\0,返回值为随机值
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zd\n", sizeof(arr));
//	//括号内单独存放数组名，计算的是整个数组大小，包含\0，即7
//	printf("%zd\n", sizeof(arr + 0));
//	//arr为数组首元素地址，+0后仍为数组首元素地址，表示指针，即4/8
//	printf("%zd\n", sizeof(*arr));
//	//此处arr表示首元素地址，解引用后得到元素a，大小为1，即1
//	printf("%zd\n", sizeof(arr[1]));
//	//arr[1]即为元素b，大小为1,即1
//	printf("%zd\n", sizeof(&arr));
//	//&arr表示将整个数组地址取出，表示指针，即4/8
//	printf("%zd\n", sizeof(&arr + 1));
//	//&arr+1仍表示地址，即指针，即4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));
//	//arr首先和[0]结合得到元素a，接着&a+1,表示将a的地址取出并+1，仍是地址，即4/8
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(arr + 0));
//	printf("%zd\n", sizeof(*arr));
//	printf("%zd\n", sizeof(arr[1]));
//	printf("%zd\n", sizeof(&arr));
//	printf("%zd\n", sizeof(&arr + 1));
//	printf("%zd\n", sizeof(&arr[0] + 1));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";//末尾有\0
//	printf("%zd\n", strlen(arr));
//	//arr代表数组首元素地址，即从首元素a向后查找，直至遇到\0，即6
//	printf("%zd\n", strlen(arr + 0));
//	//arr+0代表数组首元素地址，即从首元素a向后查找，直至遇到\0，即6
//	//printf("%zd\n", strlen(*arr));
//	//arr表示数组首元素地址，解引用后得到元素a，不符合参数要求，即err
//	//printf("%zd\n", strlen(arr[1]));
//	//arr[1]表示元素b，不符合参数要求，即err
//	printf("%zd\n", strlen(&arr));
//	//&arr表示取出整个数组的地址，仍然是从首地址开始向后查找，直至遇到\0，即6
//	printf("%zd\n", strlen(&arr + 1));
//	//&arr+1表示取出整个数组的地址后+1，跳过整个数组，直至遇到\0，即随机值
//	printf("%zd\n", strlen(&arr[0] + 1));
//	//arr首先与[0]结合，得到元素a，接着&a+1表示将元素a的地址取出后加1，即元素b的地址，从b的地址向后查找，直至遇到\0，即5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* p = "abcdef";//末尾有\0
//	printf("%zd\n", sizeof(p));
//	//p是char*类型的指针变量,表示指针，即4/8
//	//此处p不能当做数组来处理，只有当p是真的数组时,才计算整个数组大小
//	printf("%zd\n", sizeof(p + 1));
//	//p+1表示首元素地址+1，仍是指针，即4/8
//	printf("%zd\n", sizeof(*p));
//	//*p得到首元素a，计算的是a的大小，即1
//	printf("%zd\n", sizeof(p[0]));
//	//p[0]得到元素a，计算的是a的大小，即1
//	printf("%zd\n", sizeof(&p));
//	//&p表示将指针变量p的地址取出，相当于二级指针，仍然是指针，即4/8
//	printf("%zd\n", sizeof(&p + 1));
//	//&p表示将指针变量p的地址取出，相当于二级指针，+1后仍是指针，即4/8
//	printf("%zd\n", sizeof(&p[0] + 1));
//	//p先与[0]结合，得到元素a，接着取出a的地址后+1，仍然是指针，即4/8
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* p = "abcdef";//p是char*类型的指针变量，末尾有\0
//	printf("%zd\n", strlen(p));
//	//p表示首元素地址，即从a开始向后查找，直至遇到\0，即6
//	printf("%zd\n", strlen(p + 1));
//	//p+1表示元素b地址，即从b开始向后查找，直至遇到\0，即5
//	//printf("%zd\n", strlen(*p));
//	//*p得到元素a，不符合参数要求，即err
//	//printf("%zd\n", strlen(p[0]));
//	//p[0]得到元素a，不符合参数要求，即err
//	printf("%zd\n", strlen(&p));
//	//&p表示将指针变量p的地址取出，相当于二级指针，但strlen仅接受char*类型的
//	//因此会将&p强制当作char*来处理，从p的内存中开始找\0,即随机值
//	printf("%zd\n", strlen(&p + 1));
//	//&p+1表示将指针变量p的地址取出后+1，相当于二级指针，同样的，strlen仅接受char*类型的
//	//因此会将&p+1强制当作char*来处理，从p的内存中找\0，即随机值
//	printf("%zd\n", strlen(&p[0] + 1));
//	//p先于[0]结合，得到元素a,接着取出a的地址后+1，即从元素b的地址向后查找，直至遇到\0，即5
//	return 0;
//}
#include <stdio.h>
int main()
{
    int a[3][4] = { 0 };
    printf("%zd\n", sizeof(a));
    //a是数组名，单独存放在括号内，表示整个数组，即12*4 = 48
    printf("%zd\n", sizeof(a[0][0]));
    //a[0][0]即第一行第一个元素，即4
    printf("%zd\n", sizeof(a[0]));
    //a[0]表示二维数组的首元素，即第一行元素,相当于一维数组的数组名单纯存放在括号内，表示整个数组，即16
    printf("%zd\n", sizeof(a[0] + 1));
    //a[0]是第一行元素，表示数组名a[0]，在此处数组名表示数组首元素的地址，+1后是数组a[0]中第二个元素的地址，即4/8
    printf("%zd\n", sizeof(*(a[0] + 1)));
    //a[0]是第一行元素，表示数组名a[0]，在此处数组名表示数组首元素的地址，+1后是数组a[0]中第二个元素的地址
    //解引用后表示数组a[1]中的第二个元素，即4
    printf("%zd\n", sizeof(a + 1));
    //a表示二维数组的第一行的地址，+1是第二行的地址，表示指针，即4/8
    printf("%zd\n", sizeof(*(a + 1)));
    //(a+1)表示第二行地址，解引用后访问第二行元素，即16
    printf("%zd\n", sizeof(&a[0] + 1));
    //a先与[0]结合，得到第一行的数组名，+1后是第二行的地址，即4/8
    printf("%zd\n", sizeof(*(&a[0] + 1)));
    //a先与[0]结合，得到第一行的数组名，+1后是第二行的地址，再解引用，访问的是第二行元素，即16
    printf("%zd\n", sizeof(*a));
    //a表示第一行的数组名，解引用后访问第一行元素，即16
    printf("%zd\n", sizeof(a[3]));
    //sizeof在计算变量大小时，是通过类型推导的，不会真实去访问内存空间，即16
    return 0;
}