#include<stdio.h>
void main()
{
    char op;
    float n1,n2;
    printf("Enter any operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter two numbers on which the operation has to be performed:");
    scanf("%f,%f",&n1,&n2);
    switch(op)
    {
        case '+':
        printf("%f+%f=%f",n1,n2,n1+n2);
        break;

        case '-':
        printf("%f-%f=%f",n1,n2,n1-n2);
        break;

        case '*':
        printf("%f*%f=%f",n1,n2,n1*n2);
        break;

        case '/':
        printf("%f/%f=%f",n1,n2,n1/n2);
        break;

        default:
        printf("Error! Please choose from the given operators.");
    }


}
