#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)return 0;
    }
    return 1;
}
int sum_of_digits(int n)
{
    int num=n,sum=0;
    while(num>0)
    {
        sum = sum + (num%10);
        num = num/10;
    }
    return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a==1){printf("1 2 ");a=3;}
    else if(a==2){printf("2 ");a=3;}
    if(a%2 == 0)a = a-1;
    for(int i=a;i<=b;i=i+2)
    {
        if(is_prime(i)==1)
            {
                if(is_prime(sum_of_digits(i))==1)printf("%d ",i);
            }
    }

    return 0;
}
