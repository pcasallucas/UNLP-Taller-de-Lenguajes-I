#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j;
    char palabra[] = {'h','o','l','a'};
    for (int i = 0; i<5;i++)
    {
        j++;
    }
    palabra[] = {palabra, '\0'}
    printf(palabra);
    return 0;
}
