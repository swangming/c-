#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int L = 0;
	int R = sizeof(a) / sizeof(a[1])-1;
	int d = 0;
	scanf("%d", &d);
	while (L<R)
	{
		int c = R + L;
			c = c / 2;
		if (a[c] < d)
			L = c+1;
		if (a[c] > d)
			R = c - 1;
		if (a[c] == d)
		{
			printf("%d", c);
			break;
		}
	}
	if (L > R)
		printf("不在该数组内。");
	return 0;
}