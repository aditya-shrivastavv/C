/* write a program to determine whether a character entered by the user is 
uppercase or lowercase */

#include <stdio.h>

int main() {
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);

    int i = ch;
    // printf("%d",i); //this line prints the ASCII value of the character.

    if (i>96 && i<123) {
        printf("lowercase");
    }
    else if (i>64 && i<91) {
        printf("UPPERCASE");
    }
    else {
        printf("please enter a alphabet only :-) ");
    }

    return 0;
}
//a b c .... z => 95 - 122
//A B C .... Z => 65 - 90