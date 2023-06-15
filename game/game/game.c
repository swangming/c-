#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//打印棋盘
void qipan(char x[hen][shu], int w, int y)
{
	int i = 0;
	for (i = 1; i <= hen; i++)
	{
		int j = 0;
		for (j=1;j <= shu; j++)
		{
			if (j != shu)
			printf(" %c |",x[i-1][j-1]);
			if (j == shu)
				printf(" %c ", x[i - 1][j - 1]);
		}
		printf("\n");
		if (i < hen)
		{
			for (j = 1; j <= shu; j++)
			{
				printf("---");
				if (j < shu)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//初始化棋盘
void qin(char pan[hen][shu])
{
	int c = 0;
	for (c = 0; c < hen; c++)
	{
		int b = 0;
		for (b = 0; b < shu; b++)
		{
			pan[c][b] = ' ';
		}
	}
}

//玩家下棋
void playrgame(char pan[hen][shu])
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("玩家走:>");
		scanf("%d,%d", &a, &b);
		if ((a-1 <= hen && a-1 >= 0) && (b-1 >= 0 && b-1 <= shu))
		{
			if (pan[a - 1][b - 1] == ' ')
			{
				pan[a-1][b-1] = '*';
				break;
			}
			else
			{
				printf("已有棋子。");
			}
		}
		else
		{
			printf("请重新输入有效坐标！");
		}
	}
}


void compute(char pan[hen][shu])//电脑走
{
	while (1)
	{
		int x = rand() % hen;
		int y = rand() % shu;
	
		if (pan[x][y] == ' ')
		{
			pan[x][y] = '#';
			break;
		}
		else
		{
			;
		}
	}
}


char panduan(char pan[hen][shu])//判断输赢：玩家赢返回“*”；电脑赢“#”；平局“o”
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (pan[i][0] == pan[i][1] && pan[i][2] == pan[i][1] && pan[i][1] != ' ')
		{
			return pan[i][0];
		}
		
	}
	for (i = 0; i < 3; i++)
	{
		if (pan[0][i] == pan[1][i] && pan[1][i] == pan[2][i] && pan[0][i] != ' ')
		{
			return pan[0][i];
		}
	}
	if (pan[0][0] == pan[1][1] && pan[1][1] == pan[2][2] && pan[0][0] != ' ')
	{
		return pan[0][0];
	}
	if (pan[0][2] == pan[1][1] && pan[1][1] == pan[2][0] && pan[0][2] != ' ')
	{
		return pan[0][2];
	}
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j == 0; j < 3; j++)
		{
			if (pan[i][j] == ' ')
				return 'o';
		}
		
	}
	return 'g';
}