#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i ; scanf("%d",&n);
    float S, *x;
    x=(float*)malloc(sizeof(float));
    for(int i=0; i<=n-1; i++)
    {
        scanf("%f", x+i);
    }
    i=0;
    do
    {
        S = S+ *(x+i);
        i++;
    }
    while(i<=n-1);
    S = S/n;
    printf("%f", S);
    return 0;
}
