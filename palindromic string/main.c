#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[101];
    gets(s);
    int n = strlen(s);
    char copy[n+1];
    for(int i=0;i<n;i++)
    {
        copy[i] = s[n-i-1];
    }
    int flag =1;
    for(int i=0;i<n;i++)
    {
        if( s[i] != copy[i]) flag=0;
    }
    if(flag == 1) printf("YES");
    else if(flag == 0) printf("NO");
    return 0;
}
