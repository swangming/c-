#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 0;
	int b = 3;
	while (a<99)
	{
		a = a + b;
		printf("%d ", a);
	}
	return 0;
}