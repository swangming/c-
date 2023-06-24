#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int ouge(int a[], int x)
{
	int count = 0;
	int i = 0;
	for (i = 0;i<x; i++)
	{
		if(a[i] % 2 == 0)
		count++;
	}
	return count;
}


int main()
{
	int a[10] = { 1,3,5,7,7,7,7,7,7,7};
	int i = 0;
	int b = sizeof(a) / sizeof(a[0]);
	int tanshu =ouge(a,b);
	int zhuan = 0;
	for (i = 0; i < tanshu; i++)
	{
		int biaozhi = 0;
		int j = 0;
		for (j = 0; j < b-i-1; j++)
		{
			if (((a[j] % 2) == 0) && ((a[j + 1] % 2) != 0))
			{
				zhuan = a[j];
				a[j] = a[j + 1];
				a[j + 1] = zhuan;
				biaozhi++;
			}
		}
		if (biaozhi == 0)
			break;
	}
	for (i = 0; i < b; i++)
	{
		printf("%d ", a[i]);
	}

	
	return 0;
}