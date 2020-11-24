#include<stdio.h>
int main()
{
    int i,j,a[50],b[50];
    int n1,n2;

    printf("Enter the size of 1st array:\n");
    scanf("%d",&n1);
    printf("\nEnter the numbers:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the size of 2nd array:\n");
    scanf("%d",&n2);
    printf("\nEnter the numbers:");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }

    printf("\n1st array:");
    for(i=0;i<n1;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n2nd array:");
    for(j=0;j<n2;j++)
    {
        printf("%d",b[j]);
    }

    for (i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                b[j]=' ';
            }
        }
    }
    printf("\n\nThe array after combining:");
    for(i=0;i<n1;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n2;i++)
    {
        if(b[i]==' ')
        continue;
        else
        {
            printf("%d\t",b[i]);
        }
               
    } 
}