#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
    int i;
    char message[2]; // Buffer to hold the character and null terminator

    for (i = 'a'; i <= 'z'; i++)
    {
        message[0] = (char)i; // Convert int to char
        message[1] = '\0';    // Null-terminate the string

        write(1, message, strlen(message));
    }

    putchar('\n'); // Use putchar to print a newline character
}

int main(void)
{
    print_alphabet();
    return 0;
}
