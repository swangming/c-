#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 0;
	if ((a=getchar())!=EOF)
	{
		if (a <  49 || a > 57)
		{
			printf ("����1��9��Χ��");
		}
		else
		{
			putchar(a);
		}
	}
	return 0;
}