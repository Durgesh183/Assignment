#include<Stdio.h>
int main()
{
    int i,j,m,n,p,q;
    int matrix[1][1];
    printf("Enter the number of rows and columns:");
    scanf("%d,%d",&m,&n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter the data in [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");


}
printf("Enter the number of rows and columns:");
    scanf("%d,%d",&p,&q);
for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("Enter the data in [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

for (i=0;i<p;i++)
{
    for (j=0;j<q;j++)
    {
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");


return 0;
}
}
