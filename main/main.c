
#ifdef FUNC_PTR_AND_CALLBACKS
#include "functionPointers.h"
#endif




int main()
{
    printf("Main Application");

    #ifdef FUNC_PTR_AND_CALLBACKS

        printf("Executing Function pointers and callbacks app");

        functionPointers();
    #endif


    return 0; 
}