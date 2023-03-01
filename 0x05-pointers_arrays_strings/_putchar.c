#include "main.h"
#include <unistd.h>
/**
 * _putchar -write he character c to stdout
 * @c:the character to print
 *return: on success 1
 on error, -1 is returnd, and errno is set apropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
