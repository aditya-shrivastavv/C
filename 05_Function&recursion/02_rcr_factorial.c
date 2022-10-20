#include <stdio.h>

int factorial(int num);

int main() {
    int n;
    printf("Enter any num to find it's factorial : ");
    scanf("%d",&n);
    printf("factorial of %d = %d\n",n,factorial(n));
}

int factorial(int num) {
    if (num == 0 || num == 1) { //since 0! & 1! is 1.
        return 1;
    }
    else {
        int fact = num * factorial(num - 1); //recursion takes place.
        return fact;
    }
}

/* factorial n nikalne ke liye ham compiler ko bolenge ki n-1 ka factorial nikal
aur usko n me multiply karde, */

/* function apne aap ko jab tak call lagata rahega jab tak {if} wali condition pe nhi
pohoch jate */ 

// {if} wali condition --> BASE CASE.
