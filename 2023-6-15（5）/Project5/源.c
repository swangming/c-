#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 0;
	if ((a=getchar())!=EOF)
	{
		if (a <  49 || a > 57)
		{
			printf ("不在1至9范围内");
		}
		else
		{
			putchar(a);
		}
	}
	return 0;
}