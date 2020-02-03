#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],sum[n+1];
    sum[0] = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum[i+1] = sum[i] + a[i];
    }

    for(int i=1;i<=k;i++)
    {
        int r,l,num,mean,den;
        scanf("%d %d",&l,&r);
        num = sum[r] - sum[l-1];
        den = r - l+1;
        mean = num / den;
        //printf("the num is %d and the denominator is %d",num,r-l+1);
        printf("%d\n",mean);
    }
    return 0;
}
