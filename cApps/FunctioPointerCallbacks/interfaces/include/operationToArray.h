#include <stddef.h>
#ifndef OPERATIONTOARRAY_H
#define OPERATIONTOARRAY_H


/*Function pointer type for operation handler*/
typedef void (*operationHadler)(int *);

/*Declaration of operation available to perform to an array*/
void increment(int * n);
void decrement(int * n);
void doubleValue(int *n);


/*function to apply operation*/
void applyOperation(int * arr, size_t SizeArray, operationHadler handler);


#endif /*OPERATIONTOARRAY_H*/