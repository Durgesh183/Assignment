#include<Stdio.h>
void main()
{
    int a[3][3]={{1,2,3},{4,5,6},{5,6,7}};
    int b[3][3]={{1,2,3},{1,2,3},{3,11,6}};
    int c[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }


}
