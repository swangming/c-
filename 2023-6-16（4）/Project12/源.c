#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 1;
	int b[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	int c = 0;
	int d = 1;
	int e = 0;
	int f = 1;
	scanf("%d", &e);
	for (;f<=e;f++)
	{
		for (; a <= f ; a++)
		{
			d = d * a;
		}
		c = d + c;
	}
	printf("%d",c);
	return 0;
}