#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,count1=0,count2=0,count3=0,count=0;
    int arr[100];
    printf("\nEnter the size of the cloud : ");
    scanf("%d",&n);
    printf("\nEnter the type of cloud : ");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    if((arr[0]!=0) || (arr[n-1]!=0))
    {
        printf("-1");
    }

    for(i=0;i<=n-1;i++)
    {
        if(arr[i+1]==1)
        {
            i=i+2;
            count1++;
            printf("\nCount of 1 increment : %d",count1);
        }
        else
        {
            if((arr[i+1]==0) && (arr[i+2]==0))
            {
                i=i+2;
                count2++;
                printf("\nCount for  two consecutive 0s : %d",count2);
            }
            else
            {
                count3++;
                printf("\nCount if only one 0 is there : %d",count3);
            }
        }
        
    }
    count=count1+count2+count3;
    printf("\nTotal count%d",count);
}