#include <stdio.h>
#include <stdlib.h>

int invertir(int num)
{
    int aux,nuevo;
    while (num)
    {
        aux=0;
        aux = num % 10;
        nuevo += aux;
        nuevo *= 10;
        num /= 10;
    }
    nuevo /= 10;

    return nuevo;
}

int main()
{
    int num, nuevo;
    printf("ingresar un numero entero: " );
    scanf("%d", &num);
    nuevo = invertir(num);
    printf("resultado: %d \n", nuevo);
    return 0;
}
