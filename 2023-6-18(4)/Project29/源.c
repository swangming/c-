#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


int main()
{
	char a[30] = {0};
	char b[7] = "������";
	system ("shutdown -s -t 60");
	for (;;)
	{
		printf("����60s�����롰��������\n");
		scanf("%s", a);
		if (strcmp(a, b) == 0);
		{
			printf ("������ȷ");
			system("shutdown -a");
			break;
		}
		if (strcmp(a, b) != 0);
		{
			printf("ʱ�䲻���ˡ�\n");
		}
	}
	return 0;
}