#include <stdio.h>
#include <stdlib.h>

typedef struct
        {
            unsigned anio;
            unsigned mes;
            unsigned dia;
        }datos

struct fecha
{
    int valor;
    union
    {
        unsigned valor

    };

}fecha;

int main()
{
    fecha fecha1, fecha2;
    fecha1.valor = 1;
    fecha2.valor = 2;
    fecha1.datos.anio = 2000;
    fecha1.datos.mes = 12;
    fecha1.datos.dia = 10;
    fecha2.datos.anio = 2000;
    fecha2.datos.mes = 12;
    fecha2.datos.dia = 11;

    if (fecha1.valor < fecha2.valor)
    {
        printf("buenaaaa");
    }
    else
    {
        printf("mal ahi man");
    }
    return 0;
}
