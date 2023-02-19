/*
    Author : Md. Shifat Hasan  |  KUET CSE 2021  |  2107067
    Topic  : Matrix Multiplication
*/
#include <stdio.h>

// ---------------------------------------------------------------- //

void input_matrix(int r, int c, double mat[][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        printf("[Row %d]: ", i + 1);
        for (j = 0; j < c; j++)
            scanf("%lf", &mat[i][j]);
    }
}

void print_matrix(int r, int c, double mat[][c])
{
    int i, j, num, max = 0, max_num_len = 9;

    // get max number to calculate perfect padding
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            num = (mat[i][j] < 0) ? -mat[i][j] : mat[i][j];
            if (num > max)
                max = num;
        }
    }
    // calculate max padding
    while (max /= 10)
        max_num_len++;

    // print the numbers in a proper matrix format
    for (i = 0; i < r; i++)
    {
        printf("[");
        for (j = 0; j < c; j++)
            printf(" %*lf ", max_num_len, mat[i][j]);
        printf("]\n");
    }
}

// (c1 = r2) and that's why there's no need to pass r2
void multiply_matrix(int r1, int c1, int c2, double mat1[][c1], double mat2[][c2], double mat3[][c2])
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mat3[i][j] = 0;
            for (k = 0; k < c1; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

// ---------------------------------------------------------------- //

int main()
{
    int r1, c1, r2, c2;

input:
    // get the dimensions of the matrices
    printf("\nDimension of the First Matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Dimension of the Second Matrix: ");
    scanf("%d %d", &r2, &c2);

    // check if matrix-multiplication is applicable to them
    if (r1 < 1 || c1 < 1 || r2 < 1 || c2 < 1 || c1 != r2)
    {
        printf("\n\n[ Note ]\n1. Number of rows and columns must be greater than zero.\n2. Number of columns of the first maxtrix must be equal to the number of rows of the second maxtrix.\n\nSo, Please try again.\n\n");
        goto input;
    }

    double mat1[r1][c1], mat2[r2][c2], mat3[c1][r1];

    // input matrix
    printf("\nFirst Matrix (%d x %d):\n\n", r1, c1);
    input_matrix(r1, c1, mat1);
    printf("\n\nSecond Matrix (%d x %d):\n\n", r2, c2);
    input_matrix(r2, c2, mat2);

    // print those two matrices
    printf("\n\n(Matrix_1):\n\n");
    print_matrix(r1, c1, mat1);
    printf("\n\n(Matrix_2):\n\n");
    print_matrix(r2, c2, mat2);

    // multiply matrices
    multiply_matrix(r1, c1, c2, mat1, mat2, mat3); // (c1 = r2) and that's why there's no need to pass r2

    // print the result-matrix
    printf("\n\n(Matrix_1 x Matrix_2):\n\n");
    print_matrix(r1, c2, mat3); // dimensions of mat3 is (r1 x c2)

    printf("\n\n");
    return 0;
}
