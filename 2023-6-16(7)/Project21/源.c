#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 1;
	float b=0.0;
	float c =0.0;
	int d = 1;
	for (; a <= 100; a++)
	{
		b = 1.0/ a;
		c = c + d *b;
		d = -d;
	}
	printf("%f", c);
	return 0;
}