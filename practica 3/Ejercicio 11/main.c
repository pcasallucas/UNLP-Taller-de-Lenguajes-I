#include <stdio.h>

typedef struct {
    unsigned segundo : 5;
    unsigned minuto  : 6;
    unsigned hora    : 5;
} horario_t;

void leerHorario(horario_t *h);
void imprimirHorario(horario_t h);

int main()
{
    horario_t h;

    leerHorario(&h);

    printf("Horario almacenado:\n");
    imprimirHorario(h);

    printf("sizeof(horario_t) = %zu bytes\n", sizeof(h));

    return 0;
}

void leerHorario(horario_t *h)
{
    unsigned hora, minuto, segundo;

    printf("Ingrese hora (0-23): ");
    scanf("%u", &hora);

    printf("Ingrese minuto (0-59): ");
    scanf("%u", &minuto);

    printf("Ingrese segundo (0-59): ");
    scanf("%u", &segundo);

    h->hora = hora;
    h->minuto = minuto;
    h->segundo = segundo / 2;
}

void imprimirHorario(horario_t h)
{
    printf("%02u:%02u:%02u\n",
           h.hora,
           h.minuto,
           h.segundo * 2);
}
