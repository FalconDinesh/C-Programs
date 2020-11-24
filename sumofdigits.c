#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int digit,digits;
    int a=n;
    while(n)
    {
        n=n/10;
        digits++;
    }
    while(a)
    {
        digit+=a%10;
        a/=10;
    }
    printf("%d",digit);
    
    return 0;
}