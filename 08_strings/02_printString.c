#include <stdio.h>

int main() {
    int i=0;
    char Name[] = "Aditya_Shrivastav";
    char* ptr = Name;
//==========================================
    for (i=0; i<17; i++) {
        printf("%c",Name[i]);
    }

    printf("\n");
    i=0;
//===========================================
    while (i<17) {
        printf("%c",Name[i]);
        i++;
    }

    printf("\n");
    i=0;
/* this is a better way because we don't have to count the number of characters */
    while (*ptr !='\0') { 
        printf("%c",*ptr);
        ptr++;
    }

    printf("\n");
    i=0;
//===========================================
    do {
        printf("%c",Name[i]);
        i++;
    }while (i<17);

    return 0;
}