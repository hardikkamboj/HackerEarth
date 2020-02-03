#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[105];
    scanf("%s",s);
    int l = strlen(s),sum=0;
    for(int i=0;i<l;i++)
    {
        sum = sum + s[i] - 'a' + 1;
    }
    printf("%d",sum);
    return 0;
}
