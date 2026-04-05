#include <stdio.h>
#include <stdlib.h>
void lector(int num, float *minimo, float *maximo);

int main()
{
    int num;
    float max, min;
    printf("Ingrese la cantidad de repeticiones: ");
    scanf("%d",&num);
    lector(num,&min,&max);
    printf("Valor minimo: %f \n", min);
    printf("Valor maximo: %f \n", max);
    return 0;
}

void lector(int num, float *minimo, float *maximo)
{
    int i;
    float temp;
    *minimo = 999;
    *maximo = 0;
    for (i=1;i<=num;i++)
    {
        printf("Ingrese un numero flotante: ");
        scanf("%f",&temp);
        if (temp < *minimo)
        {
            *minimo = temp;
        }
        if (temp > *maximo)
        {
            *maximo = temp;
        }
    }
}
