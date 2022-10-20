/* C provides a set of standard library functions for string manipulation */
/* To use string manipulation functions string.h library is required */
#include <stdio.h>
#include <string.h>

int main() {
    char* company_name = "Microsoft";
    int length = strlen(company_name);
// strlen() gives the length of the string stored in a variable excluding the null character.
    printf("the length of the string is %d\n",length); 

    char firstcopy[50];
    strcpy(firstcopy,company_name);
//strcpy() is used to copy the content of second string into first string passed to it.
// char source[] = "Microsoft";
// char target[30];
// strcpy(target,source);
//target string should have enough capacity to store the source string.     
    printf("firstcopy = %s",firstcopy);

    char string1[] = "Hello";
    char string2[] = "World";
    strcat(string1,string2);
//strcat() is used to concatanate two strings
//strcat(target,source)
//the source string combines to the target string. without any spaces 
    printf("string1 = %s",string1);

    char* firstname = "Aditya";
    char lastname[] = "Shrivastav";
    int cmp = strcmp(firstname,lastname);
// strcmp() is used to compare two strings
//returns 0 if strings are equall
/* it returns a -ve value if first string's mismatching character's ASCII value is not greater than
second string's corresponding mismatching character. */
//in this case our case just talks in -1 0 1.
//it returns a positive value otherwise.
//A(ascii) - S(ascii) is negative therefore -1 is returned.
    printf("cmp value = %d",cmp); // -1

    return 0;
}