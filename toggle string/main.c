#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[101];
    gets(s);
    int i=0;
    while(s[i]!=0)
    {
        if(s[i]>='a' && s[i]<='z') s[i] = s[i] - 32;
        else if(s[i]>='A' && s[i]<='Z') s[i] = s[i] + 32;i++;
    }
    printf("%s",s);
    return 0;
}
