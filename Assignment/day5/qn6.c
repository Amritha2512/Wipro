//Print right triangle star pattern

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n<2||n>10)
    {
        printf("Invalid input. n should be between 2 and 10.\n");
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}