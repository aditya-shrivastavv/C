/* calculate the income tax as per the given slabs
no tax if income below 2.5 L
2.5 L - 5.0 L => 5%
5.0 L - 10.0 L => 10%
above 10.0 L => 20%
take income input from the user
 */

#include <stdio.h>

int main() {
    float income;
    printf("Please enter your income in LPA : ");
    scanf("%f",&income);
    printf("Your annual Income is %.1f Lakhs\n",income); //%.number limits the number of decimal points in the output 

    if(income > 0 && income <= 2.5) {
        printf("tax amount = 0 Lakhs");
    }
    else if(income > 2.5 && income <= 5.0) {
        printf("tax amount = %.2f Lakhs",income * 0.05);
    }
    else if(income > 5.0 && income <= 10.0) {
        printf("tax amount = %.2f Lakhs",income * 0.1);
    }
    else if(income > 10.0 ) {◘
        printf("tax amount = %.2f Lakhs",income * 0.2);
    }
    else {
        printf("are you mad or what ?? "); //because a mad user can enter a negative number.
    }
    return 0;
}