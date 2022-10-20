#include<stdio.h>

int Sum2n(int);

int main() {
    int n;
    printf("enter any number : ");
    scanf("%d",&n);
    printf("Sum from 1 to %d = %d",n,Sum2n(n));
}

int Sum2n(int n) {
    if (n == 1) 
        return 1;
    else
        return n + Sum2n(n-1); // #recursion.
}
