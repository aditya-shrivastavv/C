/* write a program to determine whether a number is prime or not ? */

// Note: Zero (0) and 1 are not considered as prime numbers. 
// Two (2) is the only one even prime number because all the numbers can be divided by 2.

#include <stdio.h>

int main() {
    int n,i,flag = 0;
    printf("enter any number to check prime : ");
    scanf("%d",&n); //thik hai number input le liya okay !

    if (n == 0 || n == 1) { //remember this --> 0 and 1 are not prime numbers.
        flag = 1;
    }
    for (i = 2; i < n; i++) { //for any number n to be prime it must not be divisible by numbers between 1-n means (2 3 4 .... n-1)
        if (n%i == 0) {
            flag = 1;
            break;//whenever reminder becomes zero the loop should break. 
        }
    }
    if (flag == 0) {
        printf("%d is a prime number.",n);
    }
    else {
        printf("%d is not a prime number.",n);
    }

    return 0;
}