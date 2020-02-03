#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    scanf("%lld",&n);
    int i=10,sum=0;
    while(i>0)
    {
        int num;
        num = n%10;
        sum = sum + (num*i);
        n = n/10;
        i--;
    }
    if(sum%11 == 0)printf("Legal ISBN");
    else printf("Illegal ISBN");
    return 0;
}
