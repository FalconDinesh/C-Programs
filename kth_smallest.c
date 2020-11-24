#include<stdio.h>

void main()
{
    int n,arr[100],i,j,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array :");
    for(i=0;i<=n-1;i++)
    {
        printf("  %d",arr[i]);
    }
    printf("\nEnter the k value:");
    scanf("%d",&k);
    int countless=0,answer;
    for(i=0;i<=n-1;i++)
    {
        countless=0;
        for(j=0;j<=n-1;j++)
        {
            if(arr[j]<arr[i])
            {
                countless++;
            }
        }
        if(countless==k-1)
        {
            answer=arr[i];
            break;
        }
    }
    printf("\nThe %dth smallest element is %d",k,answer);
}