#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}


int main()
{
	int a=0;
	for (a = 1000; a <= 2000; a++)
	{
		if (1 == year(a))
			printf("%d 是闰年\n", a);
		else
			printf("%d不是闰年\n", a);
	}
	return 0;
}


int han(int x, int* p)
{
	(*p)++;
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int L = 0;
	int c=sizeof(a) / sizeof(a[2]);
	int R = c - 1;
	for (; L <= R;)
	{
		int b = (R +L) / 2;
		if (x == a[b])
		{
			return b;
		}
		if (x < a[b])
			R = b - 1;
		if (x > a[b])
			L = b +1;
	}
		
		return 0;
}

int mon(char x[])
{
	printf("%d",sizeof( x));
}

int main()
{
	int e = 0;
	int num = 0;
	int f = nan(e, &num);
	scanf("%d", &e);
	if (han(e,&num))
		printf("%d下标是%d\n", e,f );
	else
		printf("不在数组内");
	printf("函数使用%d次\n", num);
	char a[6] = { '我', '的','\0'};
	printf("%s",a[0]);
	return 0;

}