/* write a program to find factorial of a number */
#include <stdio.h>

int main() {
    int n, factorial = 1;
    printf("enter a number : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("factorial of %d = %d",n,factorial);

    return 0;
}