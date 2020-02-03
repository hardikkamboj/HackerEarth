#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int round = n;
    for(int i=0;i<round;i++)
    {
        n = n-i;
        if(n<=0){printf("PATLU");break;}
        n = n - 2*i;
        if(n<=0){printf("MOTU");break;}
    }

    return 0;
}
