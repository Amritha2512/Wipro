//Print sum of even and sum of odd values between 1 to 50

#include<stdio.h>

int main()
{
    int i;
    int a=0;
    int b=0;
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            a+=i;
        }
        else
        {
            b+=i;
        }
    }
    printf("Sum of even no's between 1-50: %d\n",a);
    printf("Sum of odd no's between 1-50: %d\n",b);
    return 0;
}