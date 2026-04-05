#include <stdio.h>
#include <stdlib.h>
void mul_escalar(int m, int n,int A[m][n], int c);

int main()
{
    int m,n;
    int c;
    m = 2; n = 3;
    c = 2;

    int matrix[m][n];
    matrix[0][0] = 3;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 3;
    matrix[1][1] = 17;
    matrix[1][2] = 11;

    mul_escalar(m, n, matrix, c);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void mul_escalar(int m, int n, int A[m][n], int c)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            A[i][j] *= c;
}

