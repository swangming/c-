#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 2;
	int b = 1;
	int n = 0;
	scanf("%d", &n);
	for (; a<=n; a++)
	{
		b = b * a;
	}
	printf("%d", b);
	return 0;
}