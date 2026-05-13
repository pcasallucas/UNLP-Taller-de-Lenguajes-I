#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int dato;
    struct Nodo *sig;
} Nodo;

/* a */
void inicializar(Nodo **lista);

/* b */
void eliminar_todos(Nodo **lista);

/* c */
void agregar_inicio(Nodo **lista, int valor);

/* d */
void agregar_final(Nodo **lista, int valor);

/* e */
int cantidad_elementos(Nodo *lista);

/* f */
void imprimir_lista(Nodo *lista);

int main()
{
    Nodo *lista;

    inicializar(&lista);

    // para probar
    agregar_inicio(&lista, 10);
    agregar_inicio(&lista, 5);

    agregar_final(&lista, 20);
    agregar_final(&lista, 30);
    //.

    imprimir_lista(lista);

    printf("Cantidad: %d\n", cantidad_elementos(lista));

    eliminar_todos(&lista);

    return 0;
}

/* a */
void inicializar(Nodo **lista)
{
    *lista = NULL;
}

/* b */
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

/* c */
void agregar_inicio(Nodo **lista, int valor)
{
    Nodo *nuevo = malloc(sizeof(Nodo));

    nuevo->dato = valor;
    nuevo->sig = *lista;

    *lista = nuevo;
}

/* d */
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

/* e */
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

/* f */
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
