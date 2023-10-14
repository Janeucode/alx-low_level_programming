#define NULL ((void *)0)
#include "function_pointers.h"

typedef void (*PrintFunction)(char *);
/**
 * print_name - Entry point
 * @name: the name
 * @printfunction: defined
 * @Printfunction: defined
 * Description: print name
 * Return: void
 */
void print_name(char *name, PrintFunction printFunction)
{
	if (name != NULL && printFunction != NULL)
		printFunction(name);
}
/**
 * print_name_as_is - Entry point
 * @name: the name
 * Description: print name
 * Return: void
 */
void print_name_as_is(char *name)
{
	_putchar(name);
}
/**
 * print_uppercase - Entry point
 * @name: the name
 * Description: print name
 * Return: void
 */
void print_uppercase(char *name)
{
	 for (int i = 0; name[i] != '\0'; i++)
		 _putchar(toupper(name[i]));
	 _putchar('\n');
}
