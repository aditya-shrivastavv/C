#include <stdio.h>

int main() {
    int a,b;

    printf("enter dividend : ");
    scanf("%d",&a);
    printf("enter divisor : ");
    scanf("%d",&b);

    int rem = a%b; // % gives the remainder upon dividing something by something

    if(rem != 0) { // ! = this operator compare the two values and returns true or false
        printf("%d is not divisible by %d\n",a,b);
    }
    else {
        printf("divisible");
    }

    return 0;
}