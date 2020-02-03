#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2;i++)
    {
    printf("*   *\n");
    }
    for(int i=1;i<=n;i++)
    {
        printf("*****\n");
        printf("*   *\n");
        printf("*   *\n");
    }
    return 0;
}
