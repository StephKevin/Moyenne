#include <stdio.h>
#include <stdlib.h>

void saisir(int i, int n , float x[n])
{
    printf("entrez les elements du tableau: \n");
    for(int i=0; i<=n-1; i++)
    {
        scanf("%f", &x[i]);
    }
}
void calculer(int i, int n , float x[n])
{
    float S;
    i=0;
    do
    {
        S = S+ x[i];
        i++;
    }
    while(i<=n-1);
    S = S/n;
    printf("La moyennes des elements est %f", S);

}
int main()
{
    int n, i ; n = 4;
    float S, x[n];
    saisir(i, n, x);
    calculer(i, n, x);
    return 0;
}
