#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,x;
    scanf("%lld %lld",&n,&x);
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] >= x)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
