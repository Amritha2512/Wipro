//Print series 1,2,4,8,16,32,64. Given n=64

#include<stdio.h>

int main()
{
    int n=64;
    int a;
    int b=1;

    for(a=0;b<=n;a++)
    {
        printf("%d ", b);
        b*=2;
    }
    return 0;
}