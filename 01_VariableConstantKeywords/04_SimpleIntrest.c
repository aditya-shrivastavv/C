#include <stdio.h>

int main() {
    int p,r,t;
    printf("Enter Principle Amt : ");
    scanf("%d",&p);
    printf("Enter rate of Intrest : ");
    scanf("%d",&r);
    printf("Enter Time period : ");
    scanf("%d",&t);

    int simple_intrest = (p*r*t)/100;

    printf("Simple intrest = %d.\n",simple_intrest);
    printf("Incremented amt = %d.\n",simple_intrest+p);
    
    return 0;
}