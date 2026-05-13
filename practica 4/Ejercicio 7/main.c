#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *sig;
} Nodo;

void eliminar_todos(Nodo **lista);
void agregar_inicio(Nodo **lista, int valor);
void agregar_final(Nodo **lista, int valor);
int cantidad_elementos(Nodo *lista);
void imprimir_lista(Nodo *lista);
Nodo * invertir(Nodo * ptr);

int main()
{
    Nodo*lista = NULL;
    int num = 1;
    while (num != 0)
    {
        printf("ingrese un valor pasitivo: ");
        scanf("%d", &num);
        agregar_final(&lista,num);
    }
    imprimir_lista(lista);
    Nodo *inversa = invertir(lista);
    imprimir_lista(inversa);
    return 0;
}


void eliminar_todos(Nodo **lista)
{
    Nodo *aux;

    while (*lista != NULL)
    {
        aux = *lista;
        *lista = (*lista)->sig;
        free(aux);
    }
}
void agregar_inicio(Nodo **lista, int valor)
{
    Nodo *nuevo = malloc(sizeof(Nodo));

    nuevo->dato = valor;
    nuevo->sig = *lista;

    *lista = nuevo;
}
void agregar_final(Nodo **lista, int valor)
{
    Nodo *nuevo = malloc(sizeof(Nodo));
    nuevo->dato = valor;
    nuevo->sig = NULL;

    if (*lista == NULL)
    {
        *lista = nuevo;
        return;
    }

    Nodo *aux = *lista;

    while (aux->sig != NULL)
    {
        aux = aux->sig;
    }

    aux->sig = nuevo;
}
int cantidad_elementos(Nodo *lista)
{
    int cant = 0;

    while (lista != NULL)
    {
        cant++;
        lista = lista->sig;
    }

    return cant;
}
void imprimir_lista(Nodo *lista)
{
    while (lista != NULL)
    {
        printf("%d", lista->dato);

        if (lista->sig != NULL)
            printf(", ");

        lista = lista->sig;
    }

    printf("\n");
}


Nodo * invertir(Nodo * ptr)
{
    Nodo *inv =NULL;
    Nodo* aux = ptr;
    while (aux != NULL)
    {
        agregar_inicio(&inv, aux->dato);
        aux = aux->sig;
    }
    return inv;
}
