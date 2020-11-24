#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str[100];
    int i,j,n;
    printf("Input please:");
    gets(str);
    n=strlen(str);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(str[i]==str[j])
            {
                break;
            }
        }
        if(j==i)
        {    
            printf("%c",str[j]);
        }
    }
}


