#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 2;
	int b = 1;
	int c = 0;
	for (; a <= 10; a++)
	{
		b = b * a;
		c = c + b;
	}
	printf("%d\n", c+1);
	return 0;
}