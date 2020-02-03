#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,tof=0;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int r,x;
        scanf("%d %d",&r,&x);
        float round = (2*r*22)/7.0;
        float dist = x*(100.0);
        if(dist>round )tof++;;
    }
    printf("%d",tof);

    return 0;
}
