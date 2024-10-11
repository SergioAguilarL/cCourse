#include <stdio.h>
#include <stdlib.h>
#include "swapNumberIf.h"



void swapNumberAPPMain(void)
{
    int num1;
    int num2;

    system("cls");
     printf("Executing number Swap app \n");
    printf("Enter a number for variable num1:\n");
    scanf("%d",&num1);
    printf("Enter a number for variable num1:\n");
    scanf("%d",&num2);

    printf("Num1: %d Num2: %d before swapping.\n",num1,num2);

    swapNumber(&num1,&num2);

    printf("Num1: %d Num2: %d After swapping.\n",num1,num2);
}
