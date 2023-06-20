#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

char* my_strcpy(char* dest, const char* src)
{
	printf("ÕýÈ·¡£\n");
}
int bijiao( void* x, void* y)
{
	return   (*(int*)y) - (*(int*)x);
}

int main()
{

	char  a =0;
	int b = 'y';
	char c = 0;
	int d = 'y';
	scanf("%c%d%c%d", &a, &b, &c, &d);
	printf("%c%d%c%d", a, b, c, d);
	char a = 'n';
	char b = 'm';
	scanf("%c%c", &a, &b);
	printf("%c,%c", a, b);

	char a[5]= "ascc";
	float a = 9.8;
	int* p =(int*) & a;
	printf("%f\n", a);
	printf("%d", *p);
	char a[5] = { 0 };
	printf("%p\n", a);
	printf("%p\n", a+1);
	printf("%p\n", &a+5);
	char a[5] = { 0 };
	int a = 0;
	char b = 0;
	int c = 0;
	char d = 0;
	scanf("%d%c%d%c", &a,&b,&c,&d);
	printf("%d\n", getchar());
	printf("%d\n", getchar());
	printf("%d\n", getchar());
	printf("%d", a);
	char a[5] = { 0 };
	scanf("%c%c%c%c%c", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("%d\n", getchar());
	printf("%d\n", getchar());
	printf("%d\n", getchar());
	printf("%s", a);
	char* p = "accde";
	*(p + 1) = 'e';*/
	char a[5] = "abcde";
	char b[5] = "abcde";
	 char const* c = "abcde";
	const char* d = "abcde";
	*c = 'e';
	printf("%p\n", c);
	printf("%p", d);
	if (c == d)
	{
		printf("hehe");
	}
	else
	{
		printf("haha");
	}
	printf("%s", p);
	char a[5] = "abcde";
	char(*p)[5] = &a;
	char* p = "abcde";
	printf("%p\n","abcde" );
	printf("%p\n", p);
	printf("%p\n", p+1);
	printf("%p\n%p", a, p+1);
	char* a = "abcd";
	char* b = "efg";
	char* (*pf)(char*, const char*) = my_strcpy;
	pf(a, b);
	char* (*pfArr[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
	pfArr[0](a, b);
	struct 
	{
		char name[5];
		int age;
		char xinb[3];
	}stu = {"ÍõÍþ",20,"ÄÐ"};
	printf("%s", stu.name);
	int a[6] = { 6,5,4,2,3,1 };
	qsort(a, 6,sizeof(a[0]), bijiao);
	return 0;
}