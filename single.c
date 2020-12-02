#include<stdio.h>

int main(){
    int n,arr[100],i,j;
    printf("Array size:");
    scanf("%d",&n);
    printf("\nEnter the array elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    int single;
    for (  i = 0; i<=n-1; i++)
    {
        for (  j =0 ; j<=n-1; j++)
        {
            if(arr[i]!=arr[j]){
                single=arr[i];
            }
        }
    }
    printf("\n%d",single);
    return 0;

    
}