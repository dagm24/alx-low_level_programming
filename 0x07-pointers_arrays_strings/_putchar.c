#include "main.h"
#include <unistd.h>
/**
 * _putchar -writes the charcter c to stdout
 * @c:character to print
 * Return:on success 1
 * on error, -1 is returned, and errno is set appropritely
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
