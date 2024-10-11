#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H

#include <stdio.h>
void singleLinkedListAppMian(void);

typedef void (*optionMenu)(void); 

optionMenu menuHandler[4] = {singleLinkedListAppMian};

#endif /*LINKEDLISTS_H*/