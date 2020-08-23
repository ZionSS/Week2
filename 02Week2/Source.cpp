#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, i, n, o;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (n = 1; n <= a - i; n++)
        {
            printf(" ");
        }
        for (o = 0; o <= i - 1; o++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for (i = 1; i <= a - 1; i++)
    {
        for (n = 1; n <= i; n++)
        {
            printf(" ");
        }
        for (o = 1; o <= a - i; o++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}