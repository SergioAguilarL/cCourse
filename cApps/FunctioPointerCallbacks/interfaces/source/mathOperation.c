#include "mathOperation.h"

/*The purpuse of this file is to define the functionality for the Math operator avalable for the calculator app */
int sum(int a, int b)
{
    return (a + b);
}

int substrac(int a, int b)
{
    return (a - b);
}

int mult(int a, int b)
{
    return (a*b);
}

int division(int a, int b)
{
    /*if b is equal to 0 returning 0 only for practicity not a correct mathematical answer */
    if(b == 0)
    {
        return 0;
    }
    else
    {
        return (a / b);
    }
}
