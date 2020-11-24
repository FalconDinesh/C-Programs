#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter the number of lines:" );
	scanf("%d",&n);
	int k;
	k=n%2;
	int centre;
	centre = n/2;
	int mid = centre+1;
	if(k==0)
	{
		printf("Please give an odd number as input\n");
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j && i==mid )
				{
					printf("0");
				}
				else
				{
					printf("1");
				}	
	    	}
	   		printf("\n");
	   	}
	}
}