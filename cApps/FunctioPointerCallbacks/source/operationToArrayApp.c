#include <stdio.h>
#include "operationToArray.h"


void operationToArrayMain(void)
{
    int myArr[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("\nElementes in the arry before operation: ");
    for(int index = 0; index < sizeof(myArr)/sizeof(int);index++)
    {
        printf(" %d",myArr[index]);
    }

    applyOperation(myArr,sizeof(myArr)/sizeof(int), increment);

    printf("\nElementes in the arry after increment: ");

    for(int index = 0; index < sizeof(myArr)/sizeof(int);index++)
    {
        printf(" %d",myArr[index]);
    }

    applyOperation(myArr,sizeof(myArr)/sizeof(int), decrement);

    printf("\nElementes in the arry after decrement: ");

    for(int index = 0; index < sizeof(myArr)/sizeof(int);index++)
    {
        printf(" %d",myArr[index]);
    }

    applyOperation(myArr,sizeof(myArr)/sizeof(int), doubleValue);

    printf("\nElementes in the arry after double operation: ");

    for(int index = 0; index < sizeof(myArr)/sizeof(int);index++)
    {
        printf(" %d",myArr[index]);
    }





}