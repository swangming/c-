#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{	
	printf("输入三个数字：\n");
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d,%d,%d", &a,&b,&c);
	int d[3] = { 0 };
	if (a < b)
	{
		if (c < a)
			printf("%d%d%d", b, a, c);
		if (a<c && c<b)
			printf("%d%d%d", b,  c, a);
		if (c>b )
			printf("%d%d%d", c, b , a);

	}
	else
	{
		if (c < b)
			printf("%d%d%d", a,b , c);
		else if (b < c <a )
			printf("%d%d%d", a, c, b );
		else
			printf("%d%d%d", c,a,b );
	}
	return 0;
}
