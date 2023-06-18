#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


int main()
{
	char a[30] = {0};
	char b[7] = "我是猪";
	system ("shutdown -s -t 60");
	for (;;)
	{
		printf("请在60s内输入“我是猪”。\n");
		scanf("%s", a);
		if (strcmp(a, b) == 0);
		{
			printf ("暗号正确");
			system("shutdown -a");
			break;
		}
		if (strcmp(a, b) != 0);
		{
			printf("时间不多了。\n");
		}
	}
	return 0;
}