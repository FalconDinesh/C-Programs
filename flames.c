#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100],str1[100],str2[100];
    char str3[6]="harish",str4[11]="harishkumar",str5[6]="deepan";
    int i,j,k;
    int res=0;
    printf("*******WELCOME TO FLAMES GAME*******");
    printf("\nEnter the boy name:");
    scanf("%s",&str);
    printf("\nEnter the girl name:");
    scanf("%s",&str1);
    if((strcmp(str,str3)==0) || strcmp(str,str4)==0)
    {
        printf("You are a girl...please enter your name in the girl section as the system can't accept two same genders for this game!!!");
    }
    else if(strcmp(str,str5)==0)
    {
        printf("You are gay(deepan)..This game is not for you...sorry..");
    }
    //counting the matching lettes in both names
    strcpy(str2,str1);
    for (i = 0; i<strlen(str); i++)
    {
        int count=0;
        for (j = 0;j<strlen(str2); j++)
        { 
            if(str[i]==str2[j])
            {
                str2[j]='$';
                count++;
            }
        }
        if(count>0)
        res++;
}
printf("\nMatching letters %d",res);
int flamecount;
flamecount=((strlen(str)+strlen(str1))-(2*res));

printf("\nflamecount %d",flamecount);

char f[]="flames";
int n=6;
if(n>6)
{
    flamecount=flamecount%6;
}

int l=1,currentlength=5;
for (i = 0;; i++) { 
        if (l == flamecount) 
        { 
            for (k=i;k<strlen(f)>0;k++) 
            { 
                f[k] =f[k+1]; 
            } 
            f[k+1] = '\0'; 
            currentlength = currentlength - 1; 
            i = i - 1; 
            l = 0; 
        } 
        if (i == currentlength) { 
            i = -1; 
        } 
        if (currentlength == 0) { 
            break; 
        } 
        l++; 
    }

    if (f[0] == 'f') 
        printf("\n%s  %s  you both are FRIENDS ", str, str1); 
    else if (f[0] == 'l') 
        printf("\n%s  %s are LOVERS", str, str1); 
    else if (f[0] == 'a') 
        printf("\n%s  %s have ATTRACTION ON EACH OTHER", str, str1);
    else if (f[0] == 'm') 
        printf("\n%s  %s will end up with MARRIAGE", str, str1);
    else if (f[0] == 'e') 
        printf("\n%s  %s are ENIMES", str, str1); 
    else
        printf("\n%s and %s are SISTERS/BROTHERS ", str, str1); 
    
} 
//https://www.javatpoint.com/program-to-find-all-permutations-of-a-string
//https://www.java67.com/2018/04/21-string-programming-and-coding-interview-questions-answers.html