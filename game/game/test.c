#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void jiemian()//游戏界面
{
	printf("************************\n");
	printf("** 1.play * 2.out game**\n");
	printf("************************\n");
}


void shixin()//游戏主体
{
	//int cishu = 0;//记录前四次对局
	char g = 0;
	char pan[hen][shu] = { 0 };
	qin(pan);//初始化棋盘
	qipan (pan,hen,shu);//打印棋盘
	
	while (1)
	{
		static int ci = 1;
		playrgame(pan);//玩家下棋
		qipan(pan, hen, shu);//打印棋盘
		if (ci > 2)
		{
			g = panduan( pan,hen,shu);//判断输赢：玩家赢返回“*”；电脑赢“#”；平局“o”
		
			if ('*' == g)
			{
				printf("玩家赢!\n");
				break;
			}
			if ('#' == g)
			{
				printf("电脑赢!\n");
				break;
			}
			if ('g' == g)
			{
				printf("平局!\n");
				break;
			}
			if ('o' == g)
			{
				;
			}
		}
		compute(pan);//机器下棋
		qipan(pan, hen, shu);//打印棋盘
		if (ci > 2)
		{
			g = panduan(pan,hen,shu);//判断输赢：玩家赢返回“*”；电脑赢“#”；平局“o”
			if ('*' == g)
			{
				printf("玩家赢!\n");
				break;
			}
			if ('#' == g)
			{
				printf("电脑赢!\n");
				break;
			}
			if ('g' == g)
			{
				printf("平局!\n");
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

void test()//游戏界面选择
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