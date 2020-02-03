#include <stdio.h>
#include <stdlib.h>

int main()
{
   int l,h,k,i,c=0;
   scanf("%d %d",&l,&h);
   scanf("%d",&k);
   for(i=l;i<=h;i++)
   {
       if(i%k == 0)
       c++;
    }
    printf("%d",c);

    return 0;
}
