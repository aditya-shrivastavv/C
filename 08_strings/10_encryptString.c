/* write a program to encrypt a string by adding 1 to the ascii 
value of it's character. */
#include <stdio.h>

void encrypter(char *data);

int main() {
    char a[] = "Tata_Steel";
    encrypter(a);
    printf("Encrypted string is = %s",a);
    return 0;
}

void encrypter(char *data) {
    char *ptr = data;
    while (*ptr != '\0') {
        *ptr = *ptr + 1;
        ptr++;
    }
}