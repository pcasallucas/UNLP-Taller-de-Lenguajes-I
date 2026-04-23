#include <stdio.h>
#include <stdlib.h>

typedef enum {
    BLUETOOTH = 1 << 7,
    WIFI      = 1 << 6,
    GPS       = 1 << 5,
    DATOS     = 1 << 4,
    FRONTAL   = 1 << 3,
    TRASERA   = 1 << 2,
    LINTERNA  = 1 << 1,
    VIBRAR    = 1 << 0
} Modulo;

#define TODOS   (BLUETOOTH | WIFI | GPS | DATOS | FRONTAL | TRASERA | LINTERNA | VIBRAR)
#define NINGUNO 0

void imprimirEstado(unsigned estado)
{
    printf("Bluetooth: %s\n", (estado & BLUETOOTH) ? "ON" : "OFF");
    printf("Wifi:      %s\n", (estado & WIFI) ? "ON" : "OFF");
    printf("GPS:       %s\n", (estado & GPS) ? "ON" : "OFF");
    printf("Datos:     %s\n", (estado & DATOS) ? "ON" : "OFF");
    printf("Frontal:   %s\n", (estado & FRONTAL) ? "ON" : "OFF");
    printf("Trasera:   %s\n", (estado & TRASERA) ? "ON" : "OFF");
    printf("Linterna:  %s\n", (estado & LINTERNA) ? "ON" : "OFF");
    printf("Vibrar:    %s\n", (estado & VIBRAR) ? "ON" : "OFF");
    printf("\n");
}

int main()
{
    unsigned estado = NINGUNO;

    printf("Estado inicial:\n");
    imprimirEstado(estado);

    estado |= WIFI;
    estado |= GPS;
    estado |= VIBRAR;

    printf("Activo WIFI, GPS y VIBRAR:\n");
    imprimirEstado(estado);

    estado &= ~GPS;

    printf("Desactivo GPS:\n");
    imprimirEstado(estado);

    estado ^= WIFI;

    printf("Invierto WIFI:\n");
    imprimirEstado(estado);

    if (estado & VIBRAR)
        printf("VIBRAR esta activo\n");
    else
        printf("VIBRAR esta inactivo\n");

    printf("\nActivo todos:\n");
    estado = TODOS;
    imprimirEstado(estado);

    return 0;
}
