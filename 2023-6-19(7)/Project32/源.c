#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
	char a[9];
	char b[] = "我是天才";
	system("shutdown -s -t 60");
	for (; ;)
	{
		printf("请在60s内输入“我是天才”:\n");
		scanf("%s", a);
		if (strcmp(a, b) == 0)
		{
			system("shutdown -a");
			break;
		}
		else
			printf("时间不多了。\n");
	}
	return 0; 
}