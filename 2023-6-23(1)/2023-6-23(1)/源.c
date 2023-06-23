#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int hans(int x)
{
    int i = 0;
    int c[102] = { 0,1 };
    static long sum = 0;
    for (i = 0; i < x; i++)
    {
        c[i + 2] = c[i] + c[i + 1];
        sum += c[i];
    }
    return sum;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%ld", hans(a));
    return 0;
}
