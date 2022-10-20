#include <stdio.h>

int main() {
    int n,a=0,b=1,c; //since 0 and 1 are the first two elements of series
    printf("How many Numbers You want to print : ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        printf("%d ",a);
        c=a+b; //generating the next term
        a=b;    //changing the previous two terms.
        b=c;    // ..... 
    }
}
// https://youtu.be/XH104T-Zeo0