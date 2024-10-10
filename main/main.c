
#include <stdlib.h>
#ifdef FUNC_PTR_AND_CALLBACKS
#include "functionPointerAndCallbacks.h"
#endif




int main()
{
    system("cls");
    printf("Main Application\n");

    #ifdef FUNC_PTR_AND_CALLBACKS

        int option;

        printf("\nSelect an option:\n1.Calculator app\n2.Button app\n3.Operation to an array app\n");
        scanf("%d",&option);

        if( option < 1 || option > 3)
        {
            printf("\nInvalid option\n");
        }
        else
        {

            menuHandler[option - 1]();
        }
        
    #endif


    return 0; 
}