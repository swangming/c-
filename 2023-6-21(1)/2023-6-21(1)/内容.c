#include"my_ku.h"
void huhuan(char* x, char* y, int z)
{
	int i = 0;
	char a;
	for (i = 0; i < z; i++)
	{
		a = *(x + i);
		*(x + i) = *(y + i);
		*(y + i) = a;
	}
}


void my_qsort(void* x, int y, int z, int fanfa (void* a, void* b))
{
	int i = 0;
	
	for (i = 0; i < y - 1; i++)
	{
		int count = 0;
		int j = 0;
		for (j = 0; j < y-1-i; j++)
		{
			if (fanfa((char*)x + j * z, (char*)x + (j + 1) * z) > 0)
			{
				huhuan(((char*)x) + j * z, ((char*)x) + (j + 1) * z, z);
				count++;
			}
		}
		if (0 == count)
		{
			break;
		}
	}
}