//METHOD 1 -- using a third variable
#include <stdio.h>

int main() {
    int a=5, b=10;
    printf("a = %d & b = %d\n",a,b);
    int c = a;
    a = b;
    b = c;
    printf("a = %d & b = %d\n\n",a,b);

//METHOD 2 -- NOT using a third variable

    int x=4, y=9;
    printf("x = %d & y = %d\n",x,y);
    x = x + y; //a = 13 [4 + 9] 
    y = x - y; //b = 4 [13 - 9]
    x = x - y; //a = 9 [11 - 2]
    printf("x = %d & y = %d\n",x,y);
    
    return 0;
}

