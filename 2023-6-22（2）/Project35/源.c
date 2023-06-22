#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



int han(int x)
{
	if (x > 0)
	{
		return han(x - 1)* x;
	}
	else
		return 1;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	b= han(a);
	printf("%d\n", b);
	return 0;
}
int han(int x)
{
	int y = 1;
	int z = 1;
	int e = 0;
	while (x>2)
	{
		e = y + z;
		y = z;
		z = e;
		e = y;
		x--;
	}
	return z; 
	if (x <= 2)
		return 1;
}




int main()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	b = han(a);
	printf("%d", b);
	return 0;
}
void han(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int z = 0;
				z =arr [j];
				arr[j] = arr[j + 1];
				arr[j + 1] = z;
			}
		}
	}
}



int main()
{
	int arr[4] = { 8,9,1,2 };
	int c = sizeof(arr) / sizeof(0);
	han(arr,c);
	int i = 0;
	for (i=0;i<=c-1;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

int main()
{
	int a = -2147483647;
	int b =a << 1;
	printf("%d", b);
	return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	a = b + a;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
	
	int a[5] = {1,2,3,4};
	printf("%p\n", a+1);
	printf("%p\n", &a+1);
	
	int a = 2;
	int b = 3;
	int c = (a = a + b, b = a + b);
	printf("a=%d\nb=%d", a,b);*/
	truct xue
	{
		char name[20];
		int id[20];
	};
	struct xue ww = { "ÍõÍþ",20210805117 };
	struct xue *p = &ww;
	printf("%s",p->name);
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	
	int a = 1;
	int b = --a +a ;
	printf("%d\n", b);
	
	int a = 8;
	int* p = &a;
	printf("%p\n", p);
	printf("%p\n", p + 1);
	printf("%p\n", &a);
	printf("%p\n", &a + 1);
	
	int a[10] = {0};
	int* p = a;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p + i));
		* (p + i) = 1;
		printf("%d", *(p + i));
	}
	int* p = 0x0000000000000000;
	p=p +1;
	printf("%p", p);
	char a[5] = { 0 };
	char b[5] = { 0 };
	scanf("%[^\n]", a);
	scanf("%[^ ]", b);
	gets(a);
	printf("%d ", getchar());
	char a[5][5];
	char(*p)[5][5] = &a;
	printf("%p\n", p);
	printf("%p", a);
	int i = 0;
	char a[100] = {0};
	char c = 0;
	scanf("%[^\n]", a);
	int b = strlen(a);
	char* p1 = a;
	char* p2 = &a[b-1];
	assert((p1 != NULL) && (p2 != NULL));
	while ((p1 != p2) && (p1 < p2))
	{
		c= *p2;
		*p2  = *p1;
		*p1  = c;
		p1++;
		p2--;
		i++;
	}
	printf("%s", a);
	int a = 0;
	int b = 0;
	scanf("%d,%d", &a, &b);
	static int c = 0;
	int* p1 = &c;
	*p1 = a;
	static int sum =0;
	int* p = &sum;
	*p = a;
	int i = 0;
	for (i=0; i < b-1 ; i++)
	{
		c= c * 10 +a;
		sum += c;
	}
	printf("%d", sum);
	return 0;
}