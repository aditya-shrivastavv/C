#include <stdio.h>
#include <math.h>

int main() {
    int p, n=6;
    p = n^4; //this is not n to the power 4 ,it is bitwise operation
    printf("%d\n",p);

//to get n to the power 6 we have to use pow(), include <math.h>
    p = pow(n,4);
    printf("%d",p);

    return 0;
}