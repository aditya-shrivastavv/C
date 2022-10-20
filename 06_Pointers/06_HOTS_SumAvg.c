/* write a program using a function which calculates the sum & avg of two numbers
. use pointers and print the values of sum & avg in main() */

//-----------------------------------------------------------------------------------

// FIRST ATTEMPT (FAILED AS GOT CONFUSED HOW TO RETURN TWO VALUES FROM A FUNCTION).
// #include <stdio.h>

// int SumAvg(int a, int b);

// int main() {
//     int a = 7, b = 13;
//     printf("The Sum and Avg of two Numbers are Respectively = %d %d\n",SumAvg(a,b));    
//     return 0;
// }

// int SumAvg(int a, int b) {
//     int sum = a + b;
//     int avg = (sum/2);
//     return sum, avg;
// }

//----------------------------------------------------------------------------------------

//----------Main-Point-of-the-Question--------------//
// How do i return 2 values from a fuction.
//trick :- 
// jo do(ya jyada) chize return karani hai ,uske varible(s) main() me pehele se hi banalo aur,
// call by refrence he through usme changes karlo, then you can access them in main().

//----------------------------------------------------------------------------------------

#include <stdio.h>

void SumAvg(int a, int b, int* sum, float* avg);

int main() {
    int a = 6, b = 9, sum; float avg; //declared the required varibles
    SumAvg(a, b, &sum, &avg); //passed all the required values to the function
    printf("Sum %d + %d = %d\n",a,b,sum);
    printf("Average %d & %d = %.2f\n",a,b,avg);
}
//a and b are passed by values because there is no need to make changes in them globally.
void SumAvg(int a, int b, int* sum, float* avg) {
    *sum = a + b; // a and b are added and the value is then stored at location of sum.
    *avg = (float)(*sum)/2; // same goes for this ..... 
}
