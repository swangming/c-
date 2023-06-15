#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	char a[20] = {0};
	printf("输入密码：");
	scanf ("%c",&a);
	while (getchar()!='\n');
	{
		;
	}
	printf("是否确认密码：");
	int b=0;
	b=getchar();
	if (b == 'y')
		printf("已确认");
	else
		printf("已取消");
	return 0;
}
