#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void men()//����
{
	printf("*******************************\n");
	printf("********** 1.play *************\n");
	printf("********** 2.out  *************\n");
	printf("*******************************\n");
}

void shixing()//��Ϸ����
{
	char leipan[hens][shus] = {0};//������������
	char dypan[hens][shus] = { 0 };//������ӡ����
	geshi(leipan,'0');//��ʼ����������
	geshi(dypan,'*');//��ʼ����ӡ����
	//daying(leipan);//��ӡ����
	daying(dypan);//��ӡ��ʾ��
	bulei(leipan);//������
	daying(leipan,hen);//��ӡ����
	panduan(leipan,dypan);//�ж���Ӯ
}



void test()//����ѡ��ṹ
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		men();
		printf("������>:");
		scanf("%d", &input );
		switch (input)
		{
		case 1:
			printf("play game.\n");
			shixing();
			break;
		case 2:
			printf("out game.\n");
			break;
		default:
			printf("���������룡\n");
			break;
		}
		
	} while (2!=input);
}

int main()
{
	test();
	return 0;
}