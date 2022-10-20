//gets() is a function which is used to recive a multiword string.
#include <stdio.h>

int main() {
    char name[40];

    printf("Type Your Full Name : ");
    gets(name);
    printf("%s\n",name);
//puts() is used to print a string
    puts(name);
// it automatically adds a new line, means there is no need for '\n'.
    return 0;
}