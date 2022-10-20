// using for looop
#include <stdio.h>

int main() {
    int n,i;
    printf("enter a number : ");
    scanf("%d",&n);

    printf("\nUsing FOR loop\n\n");//-----------------------------------------------
//using for loop
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    printf("\nNow using WHILE loop\n\n");//-----------------------------------------
//making the value of i = 1 again so to be used in while loop
    i = 1;
//using while loop
    while(i <= 10){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    printf("\nNow using DO WHILE loop\n\n");//-------------------------------------
//making the value of i = 1 again so to be used in do while loop
    i = 1;
//using do while loop
    do {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    } while(i <= 10); //-----------------------------------------------------------

    return 0;
}
