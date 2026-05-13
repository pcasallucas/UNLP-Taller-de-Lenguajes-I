#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *divisores = NULL;
    int cant = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisores =
                realloc(divisores,
                        (cant + 1) * sizeof(int));

            divisores[cant] = i;

            cant++;
        }
    }

    printf("\nDivisores de %d:\n", n);

    for (int i = 0; i < cant; i++)
    {
        printf("%d ", divisores[i]);
    }

    printf("\n");

    free(divisores);

    return 0;
}
