#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, i, n;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (n = 1; n <= a - i; n++)
        {
            printf(" ");
        }
        for (n = 1; n <= i; n++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}