#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void jiemian()//��Ϸ����
{
	printf("************************\n");
	printf("** 1.play * 2.out game**\n");
	printf("************************\n");
}


void shixin()//��Ϸ����
{
	//int cishu = 0;//��¼ǰ�ĴζԾ�
	char g = 0;
	char pan[hen][shu] = { 0 };
	qin(pan);//��ʼ������
	qipan (pan,hen,shu);//��ӡ����
	
	while (1)
	{
		static int ci = 1;
		playrgame(pan);//�������
		qipan(pan, hen, shu);//��ӡ����
		if (ci > 2)
		{
			g = panduan( pan,hen,shu);//�ж���Ӯ�����Ӯ���ء�*��������Ӯ��#����ƽ�֡�o��
		
			if ('*' == g)
			{
				printf("���Ӯ!\n");
				break;
			}
			if ('#' == g)
			{
				printf("����Ӯ!\n");
				break;
			}
			if ('g' == g)
			{
				printf("ƽ��!\n");
				break;
			}
			if ('o' == g)
			{
				;
			}
		}
		compute(pan);//��������
		qipan(pan, hen, shu);//��ӡ����
		if (ci > 2)
		{
			g = panduan(pan,hen,shu);//�ж���Ӯ�����Ӯ���ء�*��������Ӯ��#����ƽ�֡�o��
			if ('*' == g)
			{
				printf("���Ӯ!\n");
				break;
			}
			if ('#' == g)
			{
				printf("����Ӯ!\n");
				break;
			}
			if ('g' == g)
			{
				printf("ƽ��!\n");
				break;
			}
			if ('o' == g)
			{
				;
			}
		}
		ci++;
	}

}

void test()//��Ϸ����ѡ��
{
	int put = 0;
	srand((unsigned)time(NULL));
	do
	{
		jiemian ();
		scanf("%d", &put);
		switch (put)
		{
		case 1:
			printf("play game\n\n");
			shixin();
			break;
		case 2:
			printf("out game\n\n");
			break;
		default:
			break;
		}
	} while (put != 2);
}


int main()
{
	test();
	return 0;
}