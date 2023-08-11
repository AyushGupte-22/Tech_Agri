// wap to find the even numbers between 1 to 100.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Even numbers between 1 to 100 : ");
    for (int i = 2; i < 100; i+=2)
    {
        printf("%d ", i);
    }
    getch();
    return 0;
}