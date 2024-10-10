
#ifdef FUNC_PTR_AND_CALLBACKS
#include "functionPointerAndCallbacks.h"
#endif




int main()
{
    printf("Main Application\n");

    #ifdef FUNC_PTR_AND_CALLBACKS

        printf("Executing Function pointers and callbacks app\n");

        functionPointersMain();
    #endif


    return 0; 
}