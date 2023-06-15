#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void men()//界面
{
	printf("*******************************\n");
	printf("********** 1.play *************\n");
	printf("********** 2.out  *************\n");
	printf("*******************************\n");
}

void shixing()//游戏主体
{
	char leipan[hens][shus] = {0};//创建雷区棋盘
	char dypan[hens][shus] = { 0 };//创建打印棋盘
	geshi(leipan,'0');//初始化雷区棋盘
	geshi(dypan,'*');//初始化打印棋盘
	//daying(leipan);//打印雷盘
	daying(dypan);//打印显示盘
	bulei(leipan);//布置雷
	daying(leipan,hen);//打印雷盘
	panduan(leipan,dypan);//判断输赢
}



void test()//界面选择结构
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		men();
		printf("请输入>:");
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
			printf("请重新输入！\n");
			break;
		}
		
	} while (2!=input);
}

int main()
{
	test();
	return 0;
}