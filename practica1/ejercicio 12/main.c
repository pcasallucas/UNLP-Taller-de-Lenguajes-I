#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n;
    for (n=0;n<11;n++)
    {
        float raiz  = sqrt(n);
        float cubo = pow(n,3);
        float cuadrado = pow(n,2);

        printf("numero: %d \n", n);
        printf("cuadrado: %f \n", cuadrado);
        printf("cubo: %f \n", cubo);
        printf("raiz cuadrada: %f \n", raiz);
    }
    return 0;
}
