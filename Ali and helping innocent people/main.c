#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[11];
    gets(s);
    int a[11];
    for(int i=0;i<11;i++)
    {
        if(i!=2 && i!=6)
        {
            a[i] = s[i] - 48;
        }
    }
    int flag=0,flag1=1;
    for(int i=0;i<11;i++)
    {
        if(i==0 || i==3 || i==4 || i==7)
        {
            if((a[i]+a[i+1])%2==1){flag=1;printf("sum odd hai\n");
        }
    }
    if(s[2]=='A' || s[2]=='E' || s[2]=='I' || s[2] == 'O'|| s[2]== 'U'|| s[2]=='Y')flag1=0;
    {
        if(flag ==0 && flag1==0)printf("valid");
        else printf("invalid");

    }
    return 0;
}
