#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("输入两个数：");
	scanf("%d,%d", &a, &b);
	for (;;)
	{
		if (a < b)      //如果a小于b就互换位置。
		{
			c = a;
			a = b;
			b = c;
		}
		else				//如果a大于b则进行辗转相除。
		{

			for (;;)
			{
				c = a % b;
				if (c != 0)
				{
					c = a / b;
					a = b;
					b = c;
				}
				if (c == 0)
				{
					printf("最大公约数是：%d", b);
					break;
				}

			}
		}
	}
	return 0;
}