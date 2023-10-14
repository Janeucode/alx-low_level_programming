#include <stdarg.h>
#define NULL ((void *)0)
#include <stdio.h>
/**
 * print_all - Entry point
 * @format: the format
 * Description: print all
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	int print_separator = 0;
	
	va_start(args, format);

	 while (format && format[i])
	 {
		 if (format[i] == 'c')
		 {
			 printf("%c", va_arg(args, int));
			 print_separator = 1;
		 }
		 else if (format[i] == 'i')
		 {
			 printf("%f", (float)va_arg(args, double));
			 print_separator = 1;
		 }
		 else if (format[i] == 's')
		 {
			 str = va_arg(args, char *);
			 if (str == NULL)
				 str = "(nil)";
			 printf("%s", str);
			 print_separator = 1;
		 }
		 if (print_separator && format[i + 1] != '\0')
		 {
			 printf(", ");
			 print_separator = 0;
		 }
		 i++;
	 }
	 va_end(args);
	 printf("\n");
}
