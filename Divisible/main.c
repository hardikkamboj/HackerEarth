#include<stdio.h>
#include<stdio.h>

int first_carry(int n)
{
    while(n>10)
    n = n / 10;
    return(n%10);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],num=0,carry;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i<(n/2))carry = first_carry(a[i]);
        else carry = a[i]%10;
        num = num*10 + carry;
    }
    //printf("%d\n",num);
    if(num%11 == 0)printf("OUI");
    else printf("NON");
    return 0;

}
