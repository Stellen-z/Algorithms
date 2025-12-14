#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	FILE* pf = fopen("data.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdefghijk", pf);
//	fseek(pf, -2, SEEK_END);
//
//	fputc('g', pf);
//	//覆盖j之后光标会向后移动一个字节
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	//回到起始位置
//	rewind(pf);
//	//fseek(pf, 0, SEEK_SET);
//	fputc('x', pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("data.txt", "w+");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//写文件
	fputs("abcdefg", pf);
	fflush(pf);
	//读文件
	rewind(pf);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fseek(pf, 2, SEEK_CUR);
	fputs("xxx", pf);

	fclose(pf);
	pf = NULL;
	return 0;
}