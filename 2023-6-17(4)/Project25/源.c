#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include <stdio.h>


int main()
{
	char a[] = "aaaa";
	char b[20] = "###########";
	strcpy (b,a);
	printf("%s", b);
	return 0;
}