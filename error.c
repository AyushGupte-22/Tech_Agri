#include<stdio.h>
int main()
{
    int a=5,*c;
    int *p=&a;
    int *q;
    q=p+1;
    c=p+3;
    int t=c-p;
    printf("%d\n",t);
    return 0;
}