#include <stdio.h>
#include <stdlib.h>

int damePar(int num);
int main()
{
    int n, i, par;
    printf("Ingrese la cantidad: ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        par = damePar(i);
        printf("%d \n", par);
    }
    return 0;
}

int damePar(int num)
{
    return num * 2;
}
