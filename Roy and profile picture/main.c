#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,l;
    scanf("%d %d",&l,&t);
    for(int k=1;k<=t;k++)
    {
        int h,w;
        scanf("%d %d",&w,&h);
        if(w<l || h<l) printf("UPLOAD ANOTHER\n");
        else if(w>=l && h>=l)
            {
                if(h == w)printf("ACCEPTED\n");
                else printf("CROP IT\n");
            }
    }
    return 0;
}
