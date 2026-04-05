#include <stdio.h>
#include <stdlib.h>
void swap(int n, int vector[]);

int main()
{
    int vector[4] = {1,2,3,4};
    swap(5,vector);
    for (int i;i<=4;i++)
    {
        printf("%d \n", vector[i]);
    }
    return 0;
}

void swap(int n, int vector[])
{
    int j = 0;
    vector += n;
    for (int i; i < n; i++)
    {
        vector[i] = *(vector - j--);
    }
}
