#include <stdio.h>

int main() {
    char Name[40];
    printf("Enter Your First Name : ");
    scanf("%s",Name); // yaha par & nhi lagega kyuki varible me already pehele element ka address hota hai.
    printf("The name is %s",Name);
    return 0;   
}
//scanf automatically adds the null character when the enter key is pressed.
// Notes -
// 1. string should be short enough to fit into the declared array.
// 2. scanf cannot be used to input multiword strings with spaces.
// to get a proper string (with spaces) we use gets() & puts().