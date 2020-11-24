#include <stdio.h>
#include<string.h>
void push(char);
char pop();
int top=-1,i;
char str[20]; 

void main()
{
	char a[20],t;
	int open=0,close=0;
	int f=1;  //to check correct order..
	printf("Enter the input:\n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='(')
		{
			open++;
		}
		else if(a[i]==')')
		{
			close++;
		}
		else
		{
			printf("Invalid Input!!\n");
			break;
		}
	}
	printf("Number of open brackets:%d\n",open);
	printf("Number of closed brackets:%d\n",close);

	for(i=0;i<strlen(a);i++)
	{			
		if(a[i]=='(')
		{
			push(a[i]);
		}
		else if(a[i]==')')
		{
			if(top==-1)
			{
				f=0;
			}
			else
			{
				t=pop();
			}
		}
	}
	if(top>=0)
	f=0;
	if(f==0)
	{
		printf("Unbalanced\n");
	}
	else
	{
		printf("Balanaced\n");
	}

}

void push(char a)
{
	str[++top]=a;
}

char pop()
{
	return str[top--];
}