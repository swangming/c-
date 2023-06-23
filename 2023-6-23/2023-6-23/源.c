#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int jishu(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x /10;
	}
	return count;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 1;
	int wei = 0;
	static int count = 0;
	int ge = 0;
	for (i = 1; i <= a; i++)
	{
		int y = i;
		count = 0;
		wei=jishu(y);
		while (y)
		{
			count+=pow(y % 10, wei);
			y /= 10;
		}
		if (i == count)
		{
			ge++;
		}
	}
	printf("×ÔÃÝÊýÓÐ:%d", ge);
	return 0;
}