
#include <stdio.h>
#include "MatrixAllocationIf.h"


int** create_2d_array(int rows, int cols)
{
    int ** myMatrix = (int **)malloc(rows * sizeof(int*));
    for(int index = 0; index <  rows; index++)
    {   
        myMatrix[index] = (int *)malloc(cols * sizeof(int));

    }

    return myMatrix;

}

void populateMatrix(int ** matrix, int rows, int cols)
{
    int count_l = 0;
    
    for(int indexRows = 0; indexRows < rows; indexRows++)
    {
        
        for(int indexCols = 0; indexCols < cols; indexCols++)
        {
            matrix[indexRows][indexCols]  = count_l;
            count_l++;

        }

    }

    
}

void printMatrix(int ** matrix, int rows, int cols)
{
    for(int indexRows = 0; indexRows < rows; indexRows++)
    {
        for(int indexCols = 0; indexCols < cols; indexCols++)
        {
            printf(" %d",matrix[indexRows][indexCols]);

        }

        printf("\n");

    }
}

void freeMatrix(int ** matrix, int rows)
{

        for(int indexRows = 0; indexRows < rows ; indexRows++)
        {
            free(matrix[indexRows]);
        }
    

    free(matrix);

}
