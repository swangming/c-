#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
	char a[9];
	char b[] = "�������";
	system("shutdown -s -t 60");
	for (; ;)
	{
		printf("����60s�����롰������š�:\n");
		scanf("%s", a);
		if (strcmp(a, b) == 0)
		{
			system("shutdown -a");
			break;
		}
		else
			printf("ʱ�䲻���ˡ�\n");
	}
	return 0; 
}