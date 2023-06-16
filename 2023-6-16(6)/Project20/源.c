#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 100;
	int c = 0;
	for (; a <= 200; a++)
	{
		int b = 0;
		for (b=2;b<a;b++)
		{
			if (a % b == 0)
				break;
		
			if (b == a - 1)
			{
				printf("%d ", a);
			}
		}
	}
	return 0;
}