#include <stdio.h>
#include "MatrixAllocationIf.h"


void matrixAllocationAppMain(void)
{
    system("cls");
    
    int rows_l;
    int cols_l; 

    printf("Enter number of rows: ");
    scanf("%d", &rows_l);
    printf("Enter number of cols: ");
    scanf("%d", &cols_l);

    int ** myMatrix_l = create_2d_array(rows_l, cols_l);
    
    
    populateMatrix(myMatrix_l, rows_l, cols_l);

    

    printf("\nElements in the matrix\n");

    printMatrix(myMatrix_l, rows_l, cols_l);

    freeMatrix(myMatrix_l,rows_l);



}