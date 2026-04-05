#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, a;
    for (i=0;i<=15;i++)
    {
        srand(i);
        a = rand();
        printf("a: %d \n", a);
    }
}
/*srand genera la seed, sin el srand(), el rand() devuelve siempre sigue el mismo patron, el srand() permite
ingresar parametros para cambiar el patron, por ejemplocon time(NULL)*/

//para poner el rango de randomizado seguir la foma: rand() % (max - min + 1) + min
