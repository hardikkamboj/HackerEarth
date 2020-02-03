#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
   scanf("%d",&a);

   for(b=1;b<=a;b++)
          {
              for(i=2;i<=b;i++)

                  if(b%i==0)
                  {
                      break;
                    }
                if(b==i)
                   {

                   printf("%d",i);
                   }
          }

    return 0;
}
