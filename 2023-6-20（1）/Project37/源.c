#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


/*void han(int x[], int y)
{
	int i = 0;
	int a = 0;
	for (i = 0; i < 9; i++)
	{
		int j = y -1;
		for (j = y - 1; (j < y)&&(j>=1); j--)
		{
			if (x[j - 1] < x[j])
			{
				a = x[j-1];
				x[j - 1] = x[j];
				x[j] = a;
			}
		}
	}
}


int main()
{
	int a[9] = { 2,5,6,3,1,8,4,7,9 };
	int b = sizeof(a) / sizeof(a[0]);
	int c = 0;
	han(a,b);
	for (c = 0; c < 9; c++)
		printf("%d ", a[c]);

	return 0;
}
*/


/*int main()
{
	int a[5] = { 1,2,4,5,6 };
	int b[5] = { 3,8,9,7,4 };
	int c = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		c = a[i];
		a[i] = b[i];
		b[i] = c;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	return 0;
}*/

/*int han(unsigned int x)
{
	int y = 0;
	while (x!=0)
	{
		if (x % 2 == 1)
		{
			y++;
		}
		x = x / 2;
	}
	return y;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n",han(a));
	return 0;
}*/

/*int main()
{
	int a = -2147483647;
	int c = a - 2;
	//char b = -1;
	//char c = a + b;
	printf("%d", c);
	return 0;
}*/

/*int main()
{
	int a = 1999;
	int b = 2299;
	int c = a ^ b;
	int count = 0;
	while (c!=0)
	{
		int d = c - 1;
		c= c& d;
		count++;
	}
	printf("%d", count);
	return 0;
}*/


/*int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int b = 0;
	for (i = 0; i <32; i+=2)
	{
		b = (a >> i) & 1;
		printf("%d ",b);
	}
	printf("\n");
	for (i = 1; i < 32; i += 2)
	{
		b = (a >> i) & 1;
		printf("%d ", b);
	}
	return 0;
}*/


/*int main()
{
	int a = 5;
	int b = 3;
	int c = a ^ b;
	a = c^a;
	b = c ^ b;
	printf("a=%d b=%d", a, b);
	return 0;
}*/

/*void han(int* x, int y)
{
	int i = 0;
	for (i = 0; i < y ; i++)
	{
		printf("%d ",*(x+i));
	}
}


int main()
{
	int a[6] = { 2,3,4,5,6,7 };
	int* p = a;
	int b =sizeof(a) / sizeof(a[0]);
	han(p, b);
	return 0;
}*/

/*int han(int x)
{
	if (x == 0)
	{
		return 0;
	}
	else
	{
		return (x % 10)+ han(x / 10);
	}
}


/*int han(int x)
{
	
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d",han(a));
	return 0;
}*/


/*double han(int x, int y)
{
	if (y < 0)
		return 1.0 / han(x, -y);
	if (y == 0)
		return 1;
	if (y==1)
		return x;
	if (y>1)
		return x * han(x,y - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d,%d", &n, &k);
	double c = han(n, k);
	printf("%f", c);
	return 0;
}*/

/*struct xue
{
	char xing [7];
	int nian;
	char bie[3];
};

struct ban
{
	int xue;
	int lao;
	struct xue one;
};

int main()
{
	struct ban oneban = { 52,6,{"ÍõÍþ",20,"ÄÐ"} };
	struct ban* p = &oneban;
	printf("%s",p->one.xing );
	//printf()
	return 0;
}*/

int main()
{
	int a = 10;
	int b = 2;
	int* const p = &a;
	printf("%p\n", p);
	int** t = &p;
	*t = &b;
	printf("%p\n", p);
	return 0;
}