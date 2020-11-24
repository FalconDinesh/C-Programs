#include<stdio.h>
#include<math.h>
void main()
{
    int arr[100],i,n,a;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search;");
    scanf("%d",&a);

    for(i=0;i<=n;i++)
    {
        if(arr[i]==a)
        {
            printf("position %d",i+1);
        }   
    }   
}