#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main ()
{
	int a = 1;
	int b = 1;;
	while (a<=9)
	{
		b = 1;
		while (b<=a)
		{
			
			printf("%d*%d=%-2d ",a,b,a*b);
			b++;
		}
		printf("\n");
		a++;
	}
	return 0;
}