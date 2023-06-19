#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

int han(int x)
{
	int b = 2;
	while (1)
	{
		if (x % b == 0)
			return 0;
			break;
		if (b == sqrt(x))
			return 1;
			break;
		b++;
	}
}
int main()
{
	int a= 0;
	scanf("%d", &a);
	if (han(a)==1)
		printf("%d 是素数",a);
	else
		printf("%d 不是素数", a);
	return 0;
}