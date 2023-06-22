#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	//int a[5] = { 1,2,4,5,6 };
	//int(*p)[5] = *&a;
	//printf("%d", );
	/*int a = 10;
	char* p = &a;
	printf("%p\n", &a);
	printf("%p\n", &a + 1);
	printf("%p",p+1 );*/
	//char a[5] = { 0 };
	//scanf("%s", a);
	/*int count = 0;
	int i = 0;
	char str[100] = { 0 };
	gets(&str);
	char* p = str;
	while ('\0' != *p)
	{
		p++;
		count++;
	}
	printf("%d\n", count);*/
	char a[5] = { 0 };
	int b = 0;
	printf("%d",scanf("%c%d", a,&b));
	return 0;
}