#include <stdio.h>
#include <stdlib.h>

float promedio(float vector []);
float menor(float vector []);
int posMax(float vector []);

int main()
{
    float vector[10] = {1,2,3,4,5,6,7,8,9,10};
    float resultado = promedio(vector);
    printf("promedio: %f \n", resultado);
    resultado = menor(vector);
    printf("menor: %f \n", resultado);
    int result = posMax(vector);
    printf("Posicion del maximo: %d \n", result);
    return 0;
}

float promedio(float vector [])
{
    float suma;
    for (int i=0;i<10;i++)
    {
        suma =+ vector[i];
        printf("%f",suma);
    }
    printf("%f",suma);
    return (suma / 10);
}

float menor (float vector [])
{
    float result = vector[0];
    for (int i=1;i<10;i++)
    {
        if (vector[i] < result)
        {
            result = vector[i];
        }
    }
    return result;
}

int posMax(float vector [])
{
    int pos;
    float max;
    for (int i=0;i<10;i++)
    {
        if (vector[i] > max)
        {
            max = vector[i];
            pos = i;
        }
    }
    return pos;
}
