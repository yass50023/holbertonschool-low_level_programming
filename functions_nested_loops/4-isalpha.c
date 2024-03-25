#include "main.h"
/**
  * _isalpha - Checks for alphabetic
  * @c: The character to be checked
  *
  * Return: to 0
  */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}

return (0);
}