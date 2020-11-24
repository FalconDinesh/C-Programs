#include<stdio.h>

int main()
{
    int n,d,i,a[100];
    printf("\nEnter the length and the number of shifts: ");
    scanf("%d %d",&n,&d);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    if(d==n)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d",a[i]);
        }
    }
    else
    {
        for(i=d;i<n;i++)
        {
            printf("%d",a[i]);
        }
        for(i=0;i<d;i++)
        {
            printf("%d",a[i]);
        }
    }
}

//teketokusure tukatudo rin