#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	char a[20] = {0};
	printf("�������룺");
	scanf ("%c",&a);
	while (getchar()!='\n');
	{
		;
	}
	printf("�Ƿ�ȷ�����룺");
	int b=0;
	b=getchar();
	if (b == 'y')
		printf("��ȷ��");
	else
		printf("��ȡ��");
	return 0;
}
