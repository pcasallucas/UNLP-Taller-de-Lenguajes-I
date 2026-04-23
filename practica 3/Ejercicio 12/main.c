#include <stdio.h>
#include <stdlib.h>

typedef struct{
    unsigned red   : 5;
    unsigned green : 6;
    unsigned blue  : 5;
} RGB16;

typedef struct{
    unsigned red   : 8;
    unsigned green : 8;
    unsigned blue  : 8;
} RGB24;

void leerRGB(RGB16 *RGB);
void imprimirRGB16(RGB16 RGB);
void imprimirRGB24(RGB24 RGB);
void RGB16_a_RGB24(RGB24 *RGB_N, RGB16 RGB);
void RGB24_a_RGB16(RGB16 *RGB_N, RGB24 RGB);

int main()
{
    RGB16 RGB_O;
    RGB24 RGB_N;

    leerRGB(&RGB_O);

    printf("RGB16 original:\n");
    imprimirRGB16(RGB_O);

    RGB16_a_RGB24(&RGB_N, RGB_O);
    printf("Convertido a RGB24:\n");
    imprimirRGB24(RGB_N);

    RGB24_a_RGB16(&RGB_O, RGB_N);
    printf("Reconstruido a RGB16:\n");
    imprimirRGB16(RGB_O);

    return 0;
}

void leerRGB(RGB16 *RGB)
{
    RGB->red   = 3;
    RGB->green = 4;
    RGB->blue  = 5;
}

void imprimirRGB16(RGB16 RGB)
{
    printf("R:%u G:%u B:%u\n", RGB.red, RGB.green, RGB.blue);
}

void imprimirRGB24(RGB24 RGB)
{
    printf("R:%u G:%u B:%u\n", RGB.red, RGB.green, RGB.blue);
}

void RGB16_a_RGB24(RGB24 *RGB_N, RGB16 RGB)
{
    RGB_N->red   = RGB.red * 255 / 31;
    RGB_N->green = RGB.green * 255 / 63;
    RGB_N->blue  = RGB.blue * 255 / 31;
}

void RGB24_a_RGB16(RGB16 *RGB_N, RGB24 RGB)
{
    RGB_N->red   = RGB.red * 31 / 255;
    RGB_N->green = RGB.green * 63 / 255;
    RGB_N->blue  = RGB.blue * 31 / 255;
}
