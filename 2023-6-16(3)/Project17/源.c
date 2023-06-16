#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define m 5

int main()
{
	int a[m] = { 0,1,2,3,4 };
	const int b = 5;
	printf ("%d " ,a[b-1]);
	return 0;
}