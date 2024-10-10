#ifndef FUNCTIONPOINTERS_H
#define FUNCTIONPOINTERS_H

#include <stdio.h>


void calculatorMain(void);
void buttonApp(void);
void operationToArrayMain(void);

typedef void (*optionMenu)(void); 

optionMenu menuHandler[3] = {calculatorMain,buttonApp,operationToArrayMain};








#endif /*FUNCTIONPOINTERS_H*/