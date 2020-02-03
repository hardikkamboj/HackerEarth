#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
        char s1[1000],s2[1000];
        scanf("%s\n%s",s1,s2);
        int n1 = strlen(s1),count=0;
        int n2 = strlen(s2);
        for (int i = 0; i < n1-1; i++)
            {
              for (int j = i+1; j < n1; j++)
              {
                 if (s1[i] > s1[j])
                {
                 char temp = s1[i];
                 s1[i] = s1[j];
                 s1[j] = temp;
                }
              }
           }
        for (int i = 0; i < n2-1; i++)
            {
              for (int j = i+1; j < n2; j++)
              {
                 if (s2[i] > s2[j])
                {
                 char temp = s2[i];
                 s2[i] = s2[j];
                 s2[j] = temp;
                }
              }
           }
        //puts(s1);
        //puts(s2);
        int index_1=0,index_2=0;
        for(int i=0;i<n1;i++)
        {
            int flag=0;
            for(int j=index_2;j<n2;j++)
            {
                if(s1[i] == s2[j]){count=count+j-index_2;
                index_2 = j+1;flag=1;break;}
            }
            if(flag == 0){index_1++;count++;}
        }
        if(index_2<n2){count = count + n2 - index_2;}

        //printf("%d",count);
        printf("%d\n",count);
    }
    return 0;
}
