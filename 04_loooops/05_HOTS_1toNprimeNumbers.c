/* write a program to print prime numbers form 1 to n. */
#include<stdio.h>
int main() {
    
    int number, dividend, count , divisor;
    printf("Enter the Number : ");
    scanf("%d",&number); //taking the input.
    printf("Prime Numbers are: ");

    for (dividend = 1; dividend <= number; dividend++) {
/*count is initialized to zero for each dividend*/
        count = 0;
        for (divisor = 1; divisor <= number; divisor++) {
            if (dividend % divisor == 0) {
                count++;
            }
        }
        if (count == 2) {
/*agar count 2 tak hi increase hota hai matlab woh sirf 1 se aur khud se divide hua hai
, agar count 2 se jyda hota hai matlab kisi aur number ne bhi usko divide kiya hai
, jiska matlab woh prime nhi hai....... */
            printf("%d " ,dividend);
        }
    }
    return 0;
}