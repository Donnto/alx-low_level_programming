#include "main.h"

/**
 * rev_string - function that reverses string.
 * @s: input string.
 */
void rev_string(char *s)
{
	 int i = 0, j = 0;
	 char str[500];

	 while (*(s + i ))
	 {
		 *(str + i) = *(s + i);
		 i++;
	 }
	 i = i - 1;
	 while (i > 0)
	 {
		 *(str + i) = *(s + j);
		 j++;
		 i++;
	 }
}
