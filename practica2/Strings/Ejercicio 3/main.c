#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reemp (char word[15], char orig, char nue);

int main()
{
    char word [15] = {"hola mundo"};
    reemp(word, 'o', 'a');
    printf("%s",word);
    return 0;
}

void reemp (char word[15], char orig, char nue)
{
    int i = 0;
    while (word[i] != 0)
    {
        if (word[i] == orig)
        {
            word[i] = nue;
        }
        i++;
    }
}
