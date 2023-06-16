#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int L = 0;
	int R = sizeof( a) / sizeof(a[0]) - 1;
	int c = 0;
	printf("请输入要搜下标的数字：");
	scanf("%d", &c);
	while (L<= R)
	{
		int b = L +  R;
		int e = b  / 2;
		if (a[e]< c)
		{
			L = e -1;
		}
		if (a[e ]> c)
		{
			R = e -1;
		}
		if (a[e] == c)
		{
			printf("下标是：%d", e);
			break;
		}
	}
	if (L > R)
		printf("没有此数字。");
	return 0; 
}