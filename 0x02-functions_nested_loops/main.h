int main(void)
{
	const char *message = "_putchar\n"; 
	write(1, message, strlen(message));
        return (0);
}
void print_alphabet(void)
{
	int i;
	char message[2];

	for (i = 'a'; i <= 'z'; i++)
	{
		message[0] = (char)i;
		message[1] = '\0';
        	write(1, message, strlen(message));
	}
	putchar('\n');
	return (void);
}
