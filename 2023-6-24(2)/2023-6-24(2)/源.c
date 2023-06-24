#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

char* my_strstr(const char x[], const char y [])
{
	assert(x!=NULL);
	assert(y != NULL);
	char* p1 = x;
	char* p2 = y;
	while (1)
	{
		while (*p1 != *p2)
		{
			if (*p1 != 0)
				p1++;
			else
				return  NULL;
		}

		char* e1 = p1;
		while (*p1 == *p2)
		{
			if (*p1 == 0)
				return NULL;
			p1++;
			p2++;
		}
		if (*p2 == 0)
			return e1;
		p2 = y;
	}

}



int main()
{
	char a[10] = "asdfaweas";
	char b[5] = "";
	printf("%s", my_strstr(a, b));
	return 0;
}