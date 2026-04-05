#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[15];
    while ((strcmp(word,"ZZZ")) != 0)
    {
        printf("ingrese una palabra: ");
        scanf("%s", &word);
    }
    return 0;
}
