/* write a program to find out whether a student is pass or fail
it requires total 40% and at least 33% in each subject to pass.
Assume three subjects and take marks as input from the user. */

#include <stdio.h>

int main() {
    int sub1, sub2, sub3;
    printf("Enter the marks of three subjects one by one : ");
    scanf("%d %d %d",&sub1,&sub2,&sub3);

    int total = (sub1+sub2+sub3)/3; //calulates the avg

    if (total<40 || sub1<33 || sub2<33|| sub3<33) {
        printf("failed");
    }
    else {
        printf("PASS");
    }
    return 0;
}