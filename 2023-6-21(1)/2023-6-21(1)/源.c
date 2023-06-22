#define _CRT_SECURE_NO_WARNINGS 1
#include"my_ku.h"


int ziji (void*x,void*y)
{
	
	return *((int*)x) - *((int*)y);
}


int main()
{
	int i = 0;
	int a[10] = { 8,9,7,5,5,5,1,3,2,0 };
	my_qsort(a,10,sizeof(a[0]),ziji);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}