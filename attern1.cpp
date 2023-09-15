#include <stdio.h>
int main()
{
    char pat = 'a';
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" %c  ", pat + j);
        }
        printf("\n");
    }
    return 0;
}