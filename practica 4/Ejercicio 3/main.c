#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Escriba un programa que lea un número entero n desde teclado y luego reserve
//memoria en forma
//dinámica para un arreglo de n enteros. Inicialícelo con valores aleatorios y
//a continuación calcule e
//imprima el máximo número almacenado. Por último, libere la memoria reservada
//dinámicamente.
//Nota: Modularice la reserva de memoria, la inicialización y el cálculo del
//máximo.

void reservar(int num, int ** ptr);
void calcularMax(int * ptr, int num);

int main()
{
    int num;
    int * lista;
    printf("ingrese un valor entero: ");
    scanf("%d", &num);
    reservar(num, &lista);
    calcularMax(lista, num);
    free(lista);
    return 0;
}

void reservar(int num, int ** ptr)
{
    srand(time(NULL));
    *ptr = (int*) malloc(num*sizeof(int));
    int m;
    for (int i = 0; i < num; i++)
    {
        m = rand();
        (*ptr)[i] = m;
    }
}

void calcularMax(int * ptr, int num)
{
    int max = -1;
       for (int i = 0; i < num; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    printf("el valor maximo es %d", max);
}
