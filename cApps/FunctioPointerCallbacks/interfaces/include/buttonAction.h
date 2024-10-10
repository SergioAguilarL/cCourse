#ifndef BUTTONCLICKSIMULATION_H
#define BUTTONCLICKSIMULATION_H

#include <stdio.h>


typedef void (*ButtonClickHandler) (void);

void armedBomb(void);
void disarmBomb(void);

void buttonActionHandler(ButtonClickHandler handler);
#endif /*BUTTONCLICKSIMULATION_H*/