#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int hr1,min1,hr2,min2,time1,time2,hr,min,time;
        scanf("%d %d",&hr1,&min1);
        scanf("%d %d",hr2,&min2);
        time1 = hr1*60 + min1;
        time2 = hr2*60 + min2;
        time = time2 - time1;
        hr = time/60;
        min = time%60;
        printf("%d %d\n",hr,min);

    }
    return 0;
}
