#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int c[n];

    long long int j = 1;
  for (i=0;i<n;i++)
  {
     scanf("%d",&c[i]);
      j = ((j*c[i]) % ((int)(pow(10,9)) + 7));
    //printf("%lli",j);
  }
 printf("%lli",j);
    return 0;
}
