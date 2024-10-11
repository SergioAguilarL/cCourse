#include <stdio.h>
#include <stdlib.h>
#include "reverseArrayIf.h"

void reverseArrayAppMain(void)
{
    system("cls");
    int myArray[10]= {1,1,2,3,4,5,6,7,8,9}; 

    printf("Elements in the array before reversing: ");

    for(int index = 0; index < sizeof(myArray)/sizeof(int); index++)
    {

        printf(" %d",myArray[index]);

    }

    reverseArray(myArray,sizeof(myArray)/sizeof(int)); 

    printf("\nElements in the array after reversing: ");

    for(int index = 0; index < sizeof(myArray)/sizeof(int); index++)
    {

        printf(" %d",myArray[index]);

    }

}