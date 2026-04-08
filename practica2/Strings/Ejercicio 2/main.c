#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cant = 0;
    char word[15];
    while ((strcmp(word,"XXX")) != 0)
    {
        int i = 0;
        printf("ingrese una palabra: ");
        scanf("%s", word);
        while (word[i] != 0)
        {
            i++;
        }
        if (word[i-1] == 'o')
        {
            cant ++;
        }
        printf("cant: %d \t", cant);
    }
    printf("\n %d", cant);
    return 0;
}
