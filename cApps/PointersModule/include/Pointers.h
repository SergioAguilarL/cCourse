#ifndef POINTERS_H
#define POINTERS_H

#include <stdio.h>
void swapNumberAPPMain(void);
void reverseArrayAppMain(void);

typedef void (*optionMenu)(void); 

optionMenu menuHandler[3] = {swapNumberAPPMain, reverseArrayAppMain};


#endif /*POINTERS_H*/