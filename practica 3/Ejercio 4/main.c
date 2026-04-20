#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct carta
{
    int numero;
    char palo [6];
} carta_t;

void barajar(carta_t mazo []);
carta_t sacar_carta(carta_t mazo []);
void imprimir(carta_t);

int main()
{
    srand(time(NULL));
    carta_t mazo [50];
    return 0;
}

void barajar(carta_t mazo [50])
{
    for (int i=0; i < 50; i++)
    {
        int j = rand() % 50;
        carta_t temp = mazo[j];
        int v = rand() % 50;
        mazo[j] = mazo[v];
        mazo[v] = temp;
    }
}

carta_t sacar_carta(carta_t mazo [50])
{
    srand(time(NULL));
    int j = rand() % 50;
    carta_t card = mazo[j];
    for (int i = j; i < 50; i++)
    {
        mazo[i] = mazo[i+1];
    }
    return card;
}

void imprimir (carta_t card)
{
    printf("CARTA: \n");
    printf("numero: %d\n", card.numero);
    printf("palo: %s\n", card.palo);
}

