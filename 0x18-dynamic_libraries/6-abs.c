#include "main.h"

/**
 * _abs - check the code
 *@k: function parameter
 * Return: Always 0.
 */

int _abs(int k)
{
int abs_val;
if (k < 0)
{
abs_val = k * -1;
return (abs_val);
}
return (k);
}
