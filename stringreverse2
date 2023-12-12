#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    puts("Enter a string:");
    scanf("%[^\n]s",a);
    
    int size=0;
    int k=0;
    while(a[k]!='\0'){
        size++;
        k++;
    }

    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    puts("The reverse is:");
    puts(a);
    return 0;
}
