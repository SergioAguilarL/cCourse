#ifndef POINTERS_H
#define POINTERS_H

#include <stdio.h>
void swapNumberAPPMain(void);
void reverseArrayAppMain(void);
void matrixAllocationAppMain(void);
void linkedListInsertionAppMian(void);

typedef void (*optionMenu)(void); 

optionMenu menuHandler[4] = {swapNumberAPPMain, reverseArrayAppMain,matrixAllocationAppMain,linkedListInsertionAppMian};


#endif /*POINTERS_H*/