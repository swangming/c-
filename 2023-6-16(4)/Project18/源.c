#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������������");
	scanf("%d,%d", &a, &b);
	for (;;)
	{
		if (a < b)      //���aС��b�ͻ���λ�á�
		{
			c = a;
			a = b;
			b = c;
		}
		else				//���a����b�����շת�����
		{

			for (;;)
			{
				c = a % b;
				if (c != 0)
				{
					c = a / b;
					a = b;
					b = c;
				}
				if (c == 0)
				{
					printf("���Լ���ǣ�%d", b);
					break;
				}

			}
		}
	}
	return 0;
}