#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

/*int main()
{
	char a[20];
	system("shutdown -s -t 60");
	printf("输入123456\n");
	scanf("%s", &a);
	getchar();
	while (1)
	{
		if (strcmp(a, "123456"))
		{
			printf("输入错误");
		}
		if (strcmp(a, "123456") == 0)
		{
			system("shutdown -a");
			printf("已经退出");
			break;
		}
	}
	return 0;
}*/
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** p1 = &p;
//	printf("%d\n", **p1);
//	printf("%d\n", a);
//	return 0;
//}
void han(int x[], int y)
{
	int i = 0;
	int j = 0;
	int z = 0;
	for (i = 0; i < 9; i++)
	{
		int c = 0;
		for (j = 0; j < y - 1-i; j++)
		{
			if (x[j]> x[j+1])
			{
				z = x[j];
				x[j] = x[j + 1];
				x[j+1] = z;
				x = 1;
			}
		
		}
		if (x = 0)
			break;
	}
}

int main()
{
	int a[9] = { 0 };
	int i = 0;
	int b = sizeof(a) / sizeof(a[0]);
	printf("请输入十个数字。\n");
	for (i = 0; i < 9; i++)
	{
		scanf("%d,", &a[i]);
	}
	han(a,b);
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}