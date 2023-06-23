#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




int weishu(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x /= 10;
	}
	return count;
}

int weihe(int a,int y )
{
	int i = 0;
	int b = 1;
	for (i = 1; i <= y; i++)
	{
		b *= a;
	}
	return  b;
}
int cifan(int x,int y )
{
	int d= x;
	int a = 0;
	int c = 0;
	while (x)
	{
		a = x % 10;
		c+=weihe(a,y);
		x /= 10;
	}
	if (c == d)
		return 1;
	else
		return 0;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int wei = 0;
	int count = 0;
	for (i = 0; i <= a; i++)
	{
		wei=weishu(i);
		if (cifan(i, wei) == 1)
		{
			count++;
		}
	}
	printf("ÃÝÊýÓÐ£º%d", count);
	return 0;
}