#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void geshi(char leipan[hens][shus], char set)//≥ı ºªØ∆Â≈Ã
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hens; i++)
	{
		for (j = 0; j < shus; j++)
		{
			leipan[i][j] = set;
		}
	}
}


void daying(char leipan[hens][shus])//¥Ú”°∆Â≈Ã
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= hen; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= shu; j++)
		{
			printf("%c ",leipan[i][j]);
		}
		printf("\n");
	}

}


void bulei(char leipan[][shus])//≤º÷√¿◊
{
	int count = leishu;
	for (;1<=count&&count<=10;)
	{
		int x = rand() % hen + 1;
		int y = rand() % shu + 1;
		if ('1' != leipan[x][y])
		{
			leipan[x][y] = '1';
			count--;
		}
	}
}




void saomiao(char leipan[hens][shus], char dypan[hens][shus],int x, int y)
{
	if ((x > 0) && (x < 10) && (y > 0) && (y < 10))
	{
		char i = leipan[x][y - 1] +
			leipan[x][y + 1] +
			leipan[x - 1][y - 1] +
			leipan[x - 1][y] +
			leipan[x - 1][y + 1] +
			leipan[x + 1][y - 1] +
			leipan[x + 1][y] +
			leipan[x + 1][y + 1] - 7 * '0';
		
		if ('0' == leipan[x][y] && '0' == i)
		{
			if (dypan[x][y] != '#')
			{
				dypan[x][y] = '#';
				saomiao(leipan, dypan, x, y - 1);
				saomiao(leipan, dypan, x, y + 1);
				saomiao(leipan, dypan, x - 1, y - 1);
				saomiao(leipan, dypan, x - 1, y);
				saomiao(leipan, dypan, x - 1, y + 1);
				saomiao(leipan, dypan, x + 1, y - 1);
				saomiao(leipan, dypan, x + 1, y);
				saomiao(leipan, dypan, x + 1, y + 1);
			}
		}
		else
		{
			dypan[x][y] = i;
		}
	}
	else
	{
		dypan[x][y]=leipan[x][y];
	}
}




panduan(char leipan[hens][shus], char dypan[hens][shus])//≈–∂œ ‰”Æ
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (1)
	{
		printf("«Î ‰»Î≈≈¿◊◊¯±Í>:");
		scanf("%d,%d", &x, &y);
		if (1 <= x && x <= hen && y >= 1 && y <= shu)
		{
			if ('1' == leipan[x][y])
			{
				printf("ƒ„±ª’®À¿¡À£°\n");
				daying(leipan);
				break;
			}
			else
			{
				saomiao(leipan,dypan, x, y);
				daying(dypan);
				count++;
			}
		}
		if (71 == count)
		{
			printf("ƒ„”Æ¡À£°");
			break;
		}
	}
}
