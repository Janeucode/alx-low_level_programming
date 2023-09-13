int _pputchar(void)
{
	const char *message = "_putchar\n"; 
	write(1, message, strlen(message));
        return (0);
}
#ifndef MAIN_H
#define MAIN_H

void print_alphabet(void);

#endif /* MAIN_H */
