#include <stdio.h>
#include <stdlib.h>

typedef struct
        {
            short anio;
            char mes;
            char dia;
        }datos_t;

typedef union
    {
        unsigned valor;
        datos_t datos;

    } fecha;

int main()
{
    fecha fecha1, fecha2;
    fecha1.datos.anio = 2000;
    fecha1.datos.mes = 12;
    fecha1.datos.dia = 10;
    fecha2.datos.anio = 2000;
    fecha2.datos.mes = 12;
    fecha2.datos.dia = 11;

    return 0;
}
