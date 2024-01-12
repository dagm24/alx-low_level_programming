#include "main.h"
/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;/*Variable to indicate whether the character is a letter*/

	/* Loop through the lowercase alphabet*/
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		/* Nested loop through the uppercase alphabet*/
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			/*Check if the current character matches either a lowercase or uppercase letter*/
			if (c == lower || c == upper)
				/*Set 'isletter' to 1 if the character is a letter*/
				isletter = 1;
		}
	}
	/* Return the value of 'isletter' (1 if a letter, 0 otherwise)*/
	return (isletter);
}
