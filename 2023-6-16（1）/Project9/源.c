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
		for(;;)
		{
			c = c + b;
			break;
		}
	}
	printf("%d\n", c);
	return 0;
}