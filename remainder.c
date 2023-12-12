include<Stdio.h>
void main()
{
    int n,r;
    printf("Enter any number:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        r=n%2;
        printf("The remainder is:%d",r);

        case 2:
        r=n%2;
        printf("The remainder is:%d",r);

        case 3:
        r=n%2;
        printf("The remainder is:%d",r);

        case 4:
        r=n%2;
        printf("The remainder is:%d",r);
        break;

        default:
        printf("Error! The number is not in the range.");

    }
}
