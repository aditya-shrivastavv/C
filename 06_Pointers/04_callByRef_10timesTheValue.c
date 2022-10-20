/* write a program to change the value of a variable to ten times of it's current
value. write a function and pass the value by refrence */

#include <stdio.h>

int tenx(int *n); //function prototype

int main() {
    int n;
    printf("Enter n : "); scanf("%d",&n);
    printf("10 times n = %d\n",tenx(&n)); //passed the address of n
    printf("n = %d",n); //the changes in value of n ,will be reflected globally.
    return 0;
}

int tenx(int *n) { //accessing the value of n through it's provided address.
    *n = (*n)*10;
    return *n;
}
