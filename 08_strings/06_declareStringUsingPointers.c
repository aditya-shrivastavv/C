#include <stdio.h>

int main() {
// both the lines below have same meaning and do the same work.
    char *city1 = "Bombay";
    char city2[] = "Bombay";
/* This tells the compiler to store the string in the memory and assigned address
is stored in a char pointer */
    char city2[] = "Bombay";
//once string is initialized using this way ,it cannot be reinitialized.

    char *city1 = "Bombay";
//reinitialization is possible with this declaration.
    return 0;
}