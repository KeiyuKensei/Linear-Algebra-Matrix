#pragma once

#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

const int dim_max = 100;

void display(int mat[][dim_max], int dim);

void identity_matrix(int mat[][dim_max], int dim);
void mat_random(int mat[][dim_max], int dim);
void up_matrix(int mat[][dim_max], int dim);
void low_matrix(int mat[][dim_max], int dim);
void diagonal_matrix(int mat[][dim_max], int dim);
void transpose_matrix(int mat[][dim_max], int dim);
