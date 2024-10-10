#include <stdlib.h>
#include "buttonAction.h"


/*The porpuse of this application is to implement a simple button click simulator to practice callbacks */
void buttonApp(void)
{
    system("cls");
    printf("\nExecuting button app\n");

    buttonActionHandler(armedBomb);

    buttonActionHandler(disarmBomb);


}