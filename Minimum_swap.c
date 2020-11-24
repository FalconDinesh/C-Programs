#include<stdio.h>

void main()
{
    long long int i,j,arr[100000],arr_count,temp,count=0;
    printf("Enter the array size :");
    scanf("%lld",&arr_count);   
    printf("Enter the array:");
    for(i=0;i<=arr_count-1;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<=arr_count-1;i++)
    {
        for(j=i;j<=arr_count-1;j++)
        {
            if(arr[i]<=arr[j])
            {
                continue;
            }
            else
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                count++;
                break;
            }
        }
    }
    for(i=0;i<=arr_count-1;i++)
    {
        printf("%lld",arr[i]);
    }
    printf("\ncount is %d",count);
}


/*import java.io.*;
import java.math.*;
import java.util.*;

public class Swap {
	static int minimumSwaps(int[] arr) {
		int swap=0;
		boolean visited[]=new boolean[arr.length];

		for(int i=0;i<arr.length;i++){
			int j=i,cycle=0;

			while(!visited[j]){
				visited[j]=true;
				j=arr[j]-1;
				cycle++;
			}
			
			if(cycle!=0)
				swap+=cycle-1;
		}
		return swap;
	}

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int[] arr = new int[n];
		
		for (int i = 0; i < n; i++) {
			arr[i] = scanner.nextInt();
		}
		
		int res = minimumSwaps(arr);
		System.out.println(res);
		scanner.close();
	}
}
*/