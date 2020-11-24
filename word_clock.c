#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void rotate_word(char str[]);
int position(char a);
int main()
{
    char str[100];
    int answer,k;
    printf("Enter the string: ");
    scanf("%s",&str);
    while(str[k])
    {
        putchar(tolower(str[k]));
        k++;
    }
    rotate_word(str);
    return 0;
}

void rotate_word(char str[])
{
    int i,pos=0,sum=0,pos1=0,diff=0,count=0;
    for(i=0;i<=strlen(str)-1;i++)
    {
        pos=position(str[i]);
        printf("\nposition of %dth element %d",i+1,pos);
        if(i>0)
        {
            diff=pos-pos1;
            if(diff>13)
            {
                diff=26-diff;
            }
            count=count+abs(diff);
        }pos1=pos;
    }
    printf("\nThe count is %d",count);
}
int position(char a)
{
    int j,pos1=0;
    char alphabet[100]="abcdefghijklmnopqrstuvwxyz";
    int length=0;
    length=strlen(alphabet);
    for(j=0;j<=length-1;j++)
        {
            if(alphabet[j]==a)
            {
                pos1=j;
                break;
            } 
        }return pos1+1; 
}

