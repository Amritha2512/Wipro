//Find out the sum of series 3+33+333+3333+33333+333333


#include<stdio.h>

int main()
{
    int i=6,a=3,b=0,c;
    for(c=1;c<=i;c++)
    {
        b+=a;
        a=a*10+3;
    }
    printf("%d\n",b);
    
}