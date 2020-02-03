#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int l = strlen(s);//printf("the length of string is %d\n",l);
    for(int i=0;i<l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            int temp=n;
            while(temp>9)
                {
                    temp=temp%10;
                }
            int p =  s[i] + temp;
            if(p>57) p = p-57 -1;
            else p = p - 48;

            s[i] = '0' + p;

        }
        else if(s[i]>='a' && s[i]<='z')
        {
            int temp=n;
            while(temp > 26)
                {
                    temp = temp % 26;
                }
            int t = s[i] + temp;//printf("the new code is %d\n",t);
            if(t>122) t = t - 122 - 1;
            else t = t  - 97 ;
            s[i] = t + 97;

        }
        else if(s[i]>='A' && s[i]<='Z')
        {
           int temp=n;
           while(temp > 26)
           {
               temp = temp % 26;
           }
            int t = s[i] + temp;
            if(t > 90) t = t - 90 - 1;
            else t = t - 65;
            s[i] = t + 65;
        }
    }
    for(int i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
