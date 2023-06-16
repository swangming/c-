#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int b = 123456;
	int a= 0 ;
	int c = 0;

	for (; c <= 2; c++)
	{
		scanf ("%d", &a);
		if (a == b)
		{
			printf("µÇÂ¼³É¹¦");
			break;
		}
		if (a != b)
		{
			printf("ÃÜÂë´íÎó\n");
		}

	}
	return 0;
}