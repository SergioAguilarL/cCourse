#include "reverseArrayIf.h"

void reverseArray(int * array, size_t sizeofArray)
{

    int auxMem;

    for(int index = 0; index < sizeofArray/2; index++)
    {
        auxMem = array[index];
        array[index] = array[sizeofArray - index -1];
        array[sizeofArray - index -1] = auxMem;

    }

}