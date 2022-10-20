#include <stdio.h>

int SqureArea(int n); //function prototype

int main() {
    int side;
    printf("enter the length of the side of square : ");
    scanf("%d",&side);
    printf("Area of Square is %d",SqureArea(side)); //function call
    return 0;
}

int SqureArea(int n) { // function defination
    return (n * n);
}
//the function returns a value of datatype int.
//the returned value is passed over to the calling site.
//void function does not return any value.