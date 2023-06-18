#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


void han(int* c, int* d)
{
	int e = 0;
	e = *c;
	*c = *d;
	*d = e;
}

int main()
{
	int a = 10;
	int b = 20;
	han(&a, &b);
	printf("%d,%d", a, b);
	return 0;
}