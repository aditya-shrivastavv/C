#include <stdio.h>

/* *is used to declare the pointer, after that 
it can just be accessed by its name */

int main() {
    int n = 19;
    int *ptr_n = &n; 
    int **ptr2ptr = &ptr_n;

//ptr_n is storig the address of n
    printf("%u\n",ptr_n); 

//pointer bhi ek tarah ka variable he, toh us variable ka kya address he
    printf("%u\n",&ptr_n); //6422296

//ptr2ptr is storing the address of ptr_n, it is printed
    printf("%u\n",ptr2ptr); //6422296

//address of the new variable pointer ptr2ptr is printed
    printf("%u\n",&ptr2ptr); //6422292

//ptr2ptr ke address par kya value stored hai, ptr_n ka address, aur kya.
    printf("%u\n",*(&ptr2ptr)); //6422296

//now this starts a chain of (value at operator)
//value at address stored by ptr2ptr
//ptr2ptr is storing the address of ptr_n
//compiler found the address of ptr_n there
//but it was looking for a value
//so ,it goes forward looking for the value(because it found a address)
//it goes for the value stored at address of ptr_n
//so lastly it find the value at address of ptr_n which is the address of n.
//uff ,sab golmaal he bhai sab golmaal he
    printf("%u\n",*ptr2ptr); //6422300

    return 0;
}