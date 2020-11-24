#include<stdio.h>
#include<math.h>

int fact(int num);
void main()
{
    int num,ans;
    printf("\nEnter the number:");
    scanf("%d",&num);
    ans = fact(num);
    printf("\nThe factoiral of the number %d is %d",num,ans);
}

int fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num)*fact(num-1); 
}