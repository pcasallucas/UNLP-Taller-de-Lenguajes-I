#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("ingresar kilometraje");
    scanf("%d", &num);
    num = num * 1.61;
    printf("%d millas \n", num);
    return 0;
}
