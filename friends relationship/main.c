#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                {
                    if(j<=i)printf("*");
                    else printf("#");
                }
            for(int j=n;j>0;j--)
            {
                if(j<=i)printf("*");
                else printf("#");
            }
            printf("\n");
        }

    }
    return 0;
}
