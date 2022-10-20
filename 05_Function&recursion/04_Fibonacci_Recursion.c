/* please revist ,i understood it but , i might forget,
a bit complex also, but not that much complex */

#include <stdio.h>

int Fibonacci(int a); //prototype

int main() {
    int n;
    printf("Enter Number of Elements : ");
    scanf("%d",&n); //no. of terms taken.
    printf("Fibonacci Series\n");

    for (int i=1; i<=n; i++) { //loop start printing value from 1 to n.
        printf("%d ",Fibonacci(i));
    }

    return 0;
}

int Fibonacci(int a) {
    if (a == 0) { //base case
        return 0;
    }
    else if (a == 1) { //base case
        return 1;
    }
    else {
        return (Fibonacci(a-1) + Fibonacci(a-2)); //recursion
    }
}
// https://www.scaler.com/topics/fibonacci-series-in-c-using-recursion/

//In recursion we have to trust the function that it will somehow manage
//to arrange the required values, by again and again calling itself.....