
#ifdef FUNC_PTR_AND_CALLBACKS
#include "functionPointerAndCallbacks.h"
#endif




int main()
{
    printf("Main Application\n");

    #ifdef FUNC_PTR_AND_CALLBACKS

        printf("Executing Function pointers app\n");

        buttonApp();

        printf("\nExecuting callbacks app\n");

        calculatorMain();
    #endif


    return 0; 
}