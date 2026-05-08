#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

typedef struct
{
    float lado;
} cuadrado_t;

typedef struct
{
    float base;
    float altura;
} rectangulo_t;

typedef struct
{
    float radio;
} circulo_t;

typedef struct
{
    float semieje_mayor;
    float semieje_menor;
} elipse_t;

typedef struct
{
    float base;
    float altura;
} triangulo_t;

typedef union
{
    cuadrado_t cuadrado;
    rectangulo_t rectangulo;
    circulo_t circulo;
    elipse_t elipse;
    triangulo_t triangulo;
} geometricas_t;

typedef enum
{
    TIPO_CUADRADO = 1,
    TIPO_RECTANGULO,
    TIPO_CIRCULO,
    TIPO_ELIPSE,
    TIPO_TRIANGULO
} tipo_t;

typedef struct
{
    geometricas_t dato;
    tipo_t tipo;
} figura_t;

float calcularSuperficie(figura_t f);

int main()
{
    figura_t figura;
    int type;

    printf("Ingrese que figura es:\n");
    printf("\t1: cuadrado\n");
    printf("\t2: rectangulo\n");
    printf("\t3: circulo\n");
    printf("\t4: elipse\n");
    printf("\t5: triangulo\n");
    scanf("%d", &type);

    figura.tipo = (tipo_t)type;

    switch (figura.tipo)
    {
        case TIPO_CUADRADO:
            printf("Ingrese lado: ");
            scanf("%f", &figura.dato.cuadrado.lado);
            break;

        case TIPO_RECTANGULO:
            printf("Ingrese base: ");
            scanf("%f", &figura.dato.rectangulo.base);
            printf("Ingrese altura: ");
            scanf("%f", &figura.dato.rectangulo.altura);
            break;

        case TIPO_CIRCULO:
            printf("Ingrese radio: ");
            scanf("%f", &figura.dato.circulo.radio);
            break;

        case TIPO_ELIPSE:
            printf("Ingrese semieje mayor: ");
            scanf("%f", &figura.dato.elipse.semieje_mayor);
            printf("Ingrese semieje menor: ");
            scanf("%f", &figura.dato.elipse.semieje_menor);
            break;

        case TIPO_TRIANGULO:
            printf("Ingrese base: ");
            scanf("%f", &figura.dato.triangulo.base);
            printf("Ingrese altura: ");
            scanf("%f", &figura.dato.triangulo.altura);
            break;

        default:
            printf("Tipo invalido\n");
            return 1;
    }

    printf("La superficie es: %.2f\n", calcularSuperficie(figura));

    return 0;
}

float calcularSuperficie(figura_t f)
{
    switch (f.tipo)
    {
        case TIPO_CUADRADO:
            return f.dato.cuadrado.lado * f.dato.cuadrado.lado;

        case TIPO_RECTANGULO:
            return f.dato.rectangulo.base * f.dato.rectangulo.altura;

        case TIPO_CIRCULO:
            return PI * f.dato.circulo.radio * f.dato.circulo.radio;

        case TIPO_ELIPSE:
            return PI * f.dato.elipse.semieje_mayor * f.dato.elipse.semieje_menor;

        case TIPO_TRIANGULO:
            return (f.dato.triangulo.base * f.dato.triangulo.altura) / 2.0;

        default:
            return -1;
    }
}
