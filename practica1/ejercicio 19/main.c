#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generador(int *num1,int *num2);

int main()
{
    int a, b, resultado, puntos, i;
    char nota;
    for (i=1;i<=4;i++)
    {
        generador(&a,&b);
        printf("%d) %d + %d = ", i, a, b);
        scanf("%d", &resultado);
        if (resultado == (a+b))
        {
            puntos++;
        }
    }
    switch (puntos){
        case 0: nota = 'E'; break;
        case 1: nota = 'D'; break;
        case 2: nota = 'C'; break;
        case 3: nota = 'B'; break;
        default: nota = 'A'; break;}
        printf("\nNota: %c", nota);
    return 0;
}

void generador(int *num1,int *num2)
{
    srand(time(NULL));
    *num1 = (rand() % (101));
    *num2 = (rand() % (101));
    return;
}
