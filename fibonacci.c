#include<stdio.h>
int main()
{
    int n,i,answer=1,a=1,b=1,c=0;
    printf("\nEnter the limit of fibonacci series:");
    scanf("%d",&n);
    printf("0");
    printf("\t1");
    printf("\t1");
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
}