#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],min=100000,count=0,flag=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)min = a[i];
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        int diff = a[i] - min;
        if(diff%b[i] == 0)
        {
            count = count + (diff/b[i]);
        }
        else
        {
          flag=0;break;
        }
    }
    if(flag == 1)printf("%d",count);
    else printf("-1");
    return 0;
}
