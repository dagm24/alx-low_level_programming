#include "main.h"
/**
 *_abs - Check Main
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
	/*if true, return r as it is (already positive or zero)*/
	return (r);
	else
		/*If false, return the negation of r (convert to positive)*/
		return (r * -1);
}
