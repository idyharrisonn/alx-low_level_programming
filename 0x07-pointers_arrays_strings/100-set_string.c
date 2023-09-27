#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char (double pointer).
 * @to: Pointer to a char (string) to set the value of s to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
