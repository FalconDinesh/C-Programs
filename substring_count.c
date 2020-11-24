#include <stdio.h>
#include <string.h>
 
void main()
{
    int count = 0, i, j = 0, k;
    char str[100], str1[20];
 
    printf("Enter the string:\n");
    scanf(" %s", str);
 
    printf("Enter the substring to be matched:\n");
    scanf(" %s", str1);
 
    k = strlen(str1);
 
    for (i = 0; str[i] != '\0'; i++)
    {
        while (str[i] == str[j])
        {
            j ++;
        }
 
        if (j == k)
        {
            count ++;
            j = 0;
        }
    } 
    printf("No of matches of substring in main string is: %d\n", count);
}