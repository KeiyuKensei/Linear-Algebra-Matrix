#include "../include/Header.hpp"

void display(int mat[][dim_max], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << endl;
        for (int j = 0; j < dim; j++)
        {
            printf(" %3d ", mat[i][j]);
        }
    }
}

void identity_matrix(int mat[][dim_max], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (i == j)
            {
                mat[i][j] = 1;
            }
            else
            {
                mat[i][j] = 0;
            }
        }
    }
}

void mat_random(int mat[][dim_max], int dim)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            mat[i][j] = rand() % 99 + 1;
        }
    }
}

void up_matrix(int mat[][dim_max], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << endl;
        for (int j = 0; j < dim; j++)
        {
            if (j >= i)
            {
                printf(" %3d ", mat[i][j]);
            }
            else
            {
                cout << "     ";
            }
        }
    }
}

void low_matrix(int mat[][dim_max], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << endl;
        for (int j = 0; j < dim; j++)
        {
            if (j <= i)
            {
                printf(" %3d ", mat[i][j]);
            }
            else
            {
                cout << "     ";
            }
        }
    }
}

void diagonal_matrix(int mat[][dim_max], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << endl;
        for (int j = 0; j < dim; j++)
        {
            if (j == i)
            {
                printf(" %3d ", mat[i][j]);
            }
            else
            {
                cout << "     ";
            }
        }
    }
}

void transpose_matrix(int mat[][dim_max], int dim)
{
    for (int j = 0; j < dim; j++)
    {
        cout << endl;
        for (int i = 0; i < dim; i++)
        {
            printf(" %3d ", mat[i][j]);
        }
    }
}
