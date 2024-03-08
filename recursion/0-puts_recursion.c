#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == '\0') // Base case: end of string
    {
        putchar('\n'); // Print newline character
        return;
    }
    
    putchar(*s); // Print current character
    _puts_recursion(s + 1); // Recur for the rest of the string
}

int main()
{
    char str[] = "Hello, world!";
    _puts_recursion(str);
    return 0;
}