#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//¥Ú”°1-10
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	//¥Ú”°1-10
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			//break;
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//¥Ú”°1-10
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}