#include <stdio.h>
#include <stdlib.h>

void seatno(b)
{
       //int n;
  // scanf("%d",&n);

   int a,i;
  // for(i=0;i<b[i];i++)


  // scanf("%d",&b);
   if(b<=12)
   {
    a = 13 - b;
   }
   else if(b>=13,b<=24)
   {
       a = 37 - b;
   }

   else if(b>=25,b<=36)
   {
       a = 61 - b;
   }

    else if(b>=37,b<=48)
    {
        a = 85 - b;
    }

   else if(b>=49,b<=60)
   {
       a = 109 - b;
   }
   else if(b>=61,b<=72)
   {
       a = 133 - b;
   }
   else if(b>=73,b<=84)
   {
       a = 157 - b;
   }
   else if(b>=85,b<=96)
   {
        a =  181 - b;
   }
   else if(b>=97,b<=108)
   {
       a = 205 - b;
   }



    printf("\n");


  switch(a%12)
  {
        case 0:
        case 1:
        case 6:
        case 7:
            printf("%d WS\n",a);break;
        case 2:
        case 11:
        case 5:
        case 8:
            printf("%d MS\n",a);break;
        case 3:
        case 10:
        case 4:
        case 9:
            printf("%d AS\n",a);break;

    }
}


int main()
{
    int i,n;
    scanf("%d",&n);
    int no[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&no[i]);
        seatno(no[i]);
    }
    return 0;
}
