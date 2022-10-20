//write a program to print value of i using pointer to pointer 
#include <stdio.h>

int main() {

//version 1
//* is used because address operator is used once.
// & is used 1 time ,so * is also used 1 time.
    int i = 9;
    int *p = &i;
    int **pp = p;
    printf("%u",*pp); //9

//version 2
//** is used so that the value at address operator is applied twice
//because pp is storing the address of p, not the p itself.
// & is used 2 times ,so * is also used 2 times.
    int i = 9;
    int *p = &i;
    int **pp = &p;
    printf("%u",**pp); //9

//
    return 0;
}