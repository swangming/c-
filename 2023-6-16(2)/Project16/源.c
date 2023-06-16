#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char b[] = "hollwe word !!!";
	char a[] = "###############";
	int L = 0;
	int R = strlen(b)-1;
	int c = 0;
	for (;c <= 7;c++)
	{

		a[L] = b[L];
		a[R] = b[R];
		L = L + 1;
		R = R - 1;
		printf("%s\n", a);

	}
	return 0;
}