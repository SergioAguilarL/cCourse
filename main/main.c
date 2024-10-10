
#ifdef FUNC_PTR_AND_CALLBACKS
#include "functionPointerAndCallbacks.h"
#endif




int main()
{
    printf("Main Application\n");

    #ifdef FUNC_PTR_AND_CALLBACKS

        printf("Executing calculator app\n");

        calculatorMain();
        

        printf("\nExecuting button app\n");

        buttonApp();

        printf("\nExecuting operations to array app\n");
        operationToArrayMain();
    #endif


    return 0; 
}