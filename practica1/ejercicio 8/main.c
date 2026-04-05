#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    char car;
    printf("ingresar un numero: \n");
    scanf(" %d", &num1);
    printf("ingresar otro numero: \n");
    scanf("%d", &num2);
    printf("ingresar un operador aritmetico: \n");
    scanf(" %c", &car);
    switch  (car)
    {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: division por cero\n");
            } else {
                printf("Resultado: %d\n", num1 / num2);
            }
            break;

        default:
            printf("Error: operador invalido\n");
            break;
    }
    return 0;
}
