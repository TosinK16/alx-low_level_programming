#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	clrscr();

		printf(“Print all uppercase letters followed by all lowercase letters on the next line :\n”);
	
	/* print uppercase letters */
	for (ch = 'A'; ch < 'Z'; ch++)
		putchar(ch);
		putchar ('\n') ;

	/* print lowercase letters */
	for (ch= ‘a’; ch<= ‘z’; ch++)
		putchar(ch);
		putchar (‘\n’) ;

	return (0);
}
