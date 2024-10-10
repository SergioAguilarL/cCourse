#include <stdlib.h>
#include "mathOperation.h"

/*the porpuse of this fiule is to practice funcion pointer for C
    In the functionality of this files is to implementa a very basic calculator 
    using function pointers  */

void calculatorMain(void)
{
    system("cls");
    printf("Executing calculator app\n");
    int option;
    int num1; 
    int num2;
    int (*funcPtr[4])(int, int) = {sum,substrac,mult,division};

    
    printf("\nSelect an operation to perform: \n");

    printf("1.Sum:\n2.Substract\n3.Multiplication\n4.Division\n");

    scanf("%d",&option);
    if(option < 1 || option > 4 )
    {
        printf("Invalid Option \n");
    }
    else
    {
        printf("Enter num1: \n");
        scanf("%d",&num1);
        printf("Enter num2: \n");
        scanf("%d",&num2);
        printf("Result: %d\n", funcPtr[option -1](num1,num2));
    }

}