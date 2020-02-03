#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        int l;
        scanf("%d",&l);
        char s[l+50];
        scanf("%s",s);
        int p[12]={67,71,73,79,83,89,97,101,103,107,109,113};
        int n= strlen(s);
        for(int i=0;i<n;i++)
        {
            int min=100,diff,num;

                   for(int j=0;j<12;j++)
                  {
                      diff = s[i] - p[j];
                  if(diff<0)diff = diff*(-1);
                   if(diff<min){min=diff;num=p[j];}
                  }

            s[i] = num;
        }
        for(int i=0;i<n;i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }

    return 0;
}
