#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp;
    printf("\nEnter the number of elements you want to sort:");
    scanf("%d",&n);
    printf("\nEnter the %d numbers:",n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe sorted array is ");
    for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}

