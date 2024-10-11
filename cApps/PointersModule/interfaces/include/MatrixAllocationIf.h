#ifndef MATRIXALLOCATIONIF_H
#define MATRIXALLOCATIONIF_H

#include <stdlib.h>
int** create_2d_array(int rows, int cols);
void populateMatrix(int ** matrix, int rows, int cols);
void printMatrix(int ** matrix, int rows, int cols);
void freeMatrix(int ** matrix, int rows);

#endif /*MATRIXALLOCATIONIF_H*/