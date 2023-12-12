#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter any number:");
    scanf("%d",&n);
    if (n%6==0)
    {
        printf("The number is divisible by 6 and 3 both.");
    }
    else if(n%5==0)
    {
        printf("The number is divisible by 5.");
    }
    else if(n%3==0)
    {
        printf("The number is divisible by 3.");

    }
    else if(n%7==0)
    {
        printf("The number is divisible by 7.");
    }
    else if(n%8==0)
    {
        printf("The number is divisible by 8.");
    }
}
