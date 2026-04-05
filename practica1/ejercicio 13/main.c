#include <stdio.h>
#include <stdlib.h>
int primos()
{
    int num;
    printf("ingresar un numero entero: " );
    scanf("%d", &num);
    int i;
    for (i=2; i<num; i++)
    {
        if ((num % i) == 0)
        {
            printf("%d no es primo \n", num);
            return 1;
        }
    }
    printf("es primo \n");
    return 0;
}

int primos2()
{
    int suma,prim;
    while (suma <= 5)
    {
        prim = primos();
        if (prim == 0)
        {
            suma++;
        }
    }
}

int main()
{
    //primos();
    primos2();
    return 0;
}
