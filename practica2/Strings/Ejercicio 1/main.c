#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cant = 0;
    char word[15];
    while ((strcmp(word,"ZZZ")) != 0)
    {
        int i = 0;
        printf("ingrese una palabra: ");
        scanf("%s", word);
        while (word[i] != '/0')
        {
            i++;
        }
        if (i >= 5)
        {
            cant ++;
        }
    }
    printf("%d", cant);
    return 0;
}
