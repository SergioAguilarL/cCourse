#include "buttonAction.h"


void armedBomb(void)
{
  printf("\nBomb armed !!!!");

}
void disarmBomb(void)
{

    printf("\nBomb disarmed :)");

}


void buttonActionHandler(ButtonClickHandler handler)
{
    if(handler)
    {
        handler();
    }
}