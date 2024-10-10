#include "operationToArray.h"


/*Definition of operation available to perform to an array*/
void increment(int * n)
{
    (*n)++;

}
void decrement(int * n)
{
    (*n)--;

}
void doubleValue(int *n)
{
    *n = *n * 2;
}


/*function to apply operation*/
void applyOperation(int * arr, size_t SizeArray, operationHadler handler)
{


    for(int index = 0; index < SizeArray ; index++)
    {
        handler(&arr[index]);
    }
}

