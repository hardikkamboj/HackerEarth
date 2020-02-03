#include<stdio.h>
#include<stdlib.h>
int num_terms(int terms)
{
    for(int i=1;;i++)
    {
        if( (i*(i+1))/2  > terms)return i-1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],p_sum[n+1],max_sum = -100000;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p_sum[0] = 0,p_sum[1]=a[0];
    for(int i=2;i<n+1;i++)
    {
        p_sum[i] = p_sum[i-1] + a[i-1];
        //printf("%d\n",p_sum[i]);
    }
    for(int i=0;i<n;i++)
    {
        //printf("%d\n",p_sum[i]);
        int num = num_terms(n-i),sum=0;
        int total = (num*(num+1))/2;
        sum = p_sum[total+i] - p_sum[i];
        //printf("i = %d,total is %d,sum is - %d\n",i,total,sum);
        //printf("start - %d,end -  %d\n",p_sum[i+total],p_sum[i]);
        if(sum > max_sum)max_sum=sum;
    }
    printf("%d",max_sum);
    return 0;
}
