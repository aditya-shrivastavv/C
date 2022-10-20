/* write a program to take string as an input from the user using %c and %s
confirm that strings are equal. */

#include<stdio.h>
#include<string.h>

int main(){

    char st1[34];
    char st2[34];
    char c;
    int i =0;
// taking input through %s
    printf("Enter the value of first string\n");
    scanf("%s", st1); 
// taking input though %c.
    printf("Enter the value of second string character by character\n");
    
    while(c!='\n'){ 
        fflush(stdin); //this flushes the input of previous scanf function so that next scanf can do it's work
        scanf("%c", &c); 
        st2[i] = c;
        i++;
    }
    // st2[i]= '\0'; /* if we let this like this if will catch our enter also \n in the end. */
    st2[i-1]= '\0'; //will replace the \n by \0 thus making it a perfect string excluding the enter key in the end.

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
//comparing the strings
    printf("strcmp for these strings returns %d", strcmp(st1, st2));
//will return 0 if we use 26th line and -1 if we use 25th line.
    return 0;
}