//Print series 0,3,8,15,24,35,48,63,80,99. Given n=10

#include<stdio.h>

int main()
{
    int n=10;
    int a;
    int b=0;
    for(a=1;a<=n;a++)
    {
        b=a*a-1;
        printf("%d ",b);
    }
    return 0;
}