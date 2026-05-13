#include <stdlib.h>
#include <stdio.h>

int ** reservar(int n);
void liberar(int ** matriz, int n);
void inicializar(int ** matriz, int n);
void imprimir(int ** matriz, int n);

int main()
{
    int filas;
    printf("ingrese la cantidad de filas: ");
    scanf("%d", &filas);
    int ** matriz = reservar(filas);
    inicializar(matriz, filas);
    imprimir(matriz, filas);
    liberar(matriz, filas);
    return 0;
}

int ** reservar(int n)
{
    int ** matriz = calloc(n,sizeof(int*));
    for (int i =0; i<n; i++)
    {
        matriz[i] = calloc(i+1,sizeof(int));
    }
    return matriz;
}

void liberar(int ** matriz, int n)
{
    for (int i =0; i<n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

void inicializar(int ** matriz, int n)
{
    for(int i = 0; i < n; i++)
    {
        matriz[i][0] = 1;
        for(int j = 1; j < i; j++)
        {
            matriz[i][j] = (matriz[i-1][j-1] + matriz[i-1][j]);
        }
        matriz[i][i] = 1;
    }
}

void imprimir(int ** matriz, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
}

