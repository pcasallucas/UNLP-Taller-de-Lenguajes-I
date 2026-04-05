#include <stdio.h>
#include <stdlib.h>
void trasposicion(int m, int n,int A[m][n], int B[n][m]);

int main()
{
    int m,n;
    m = 2; n = 3;

    int matrix2[n][m];
    int matrix[m][n];
    matrix[0][0] = 3;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 3;
    matrix[1][1] = 17;
    matrix[1][2] = 11;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    trasposicion(m, n, matrix, matrix2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void trasposicion(int m, int n, int A[m][n], int B[n][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            B[j][i] = A[i][j];
    }
}
