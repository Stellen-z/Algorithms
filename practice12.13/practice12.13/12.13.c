#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt","w");
//	//FILE* pf = fopen("C:\\Users\\zz\\OneDrive\\Desktop", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//打开成功
//	//利用fputc进行输出
//	int i = 0;
//	for (i = 'a';i <= 'z';i++)
//	{
//		fputc(i, pf);
//	}
//	//关闭文件
//	fclose(pf);
//	return 0;
//}

//利用fgetc和fputc
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//错误：fputc(i, stdout);
//		int c = fgetc(pf);
//		fputc(c, stdout);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//打开成功，读取文件
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int c = fgetc(pf);
//		fputc(c, stdout);
//	}
//	/*printf("%c\n", c);
//	putchar(c);*/
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int i = fgetc(stdin);
//	fputc(i, stdout);
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int c = fgetc(pf);
//		if (c == EOF)
//		{
//			if (feof(pf))
//				printf("遇到文件末尾了\n");
//			else if (ferror(pf))
//				printf("遇到文件错误了\n");
//		}
//		else
//			fputc(c, stdout);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int mian()
//{
//	//以写的方式打开文件，再读文件，就会报错
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//进行读取
//	int c = fgetc(pf);
//	if (c == EOF)
//	{
//		if (feof(pf))
//			printf("遇到文件末尾了\n");
//		else if (ferror(pf))
//			printf("读文件发生错误了\n");
//	}
//	else
//		fputc(c, stdout);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	fputs("abc\n", pf);
//	fputs("hello world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	char arr[20] = "xxxxxxxxxxxxxxxxx";
//	fgets(arr, 20, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan",20,85.5f };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	int r = fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	printf("%d\n", r);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",20,85.5f };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",20,85.5f };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",20,85.5f };
//	char buf1[100];
//	sprintf(buf1," %d %s %f\n",s.age, s.name, s.score);
//	printf("%s\n", buf1);
//	struct S t = { 0 };
//	sscanf(buf1,"%d %s %f",&(t.age),t.name,&(t.score));
//	printf("%s %d %f\n", t.name, t.age, t.score);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//fseek(pf, 6, SEEK_SET);
//	//fseek(pf, 5, SEEK_CUR);
//	fseek(pf, -1, SEEK_END);
//	int c = fgetc(pf);
//	printf("%c\n", c);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	fputs("abcdefghi", pf);
//	fseek(pf, -3, SEEK_END);
//	fputc('x', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}