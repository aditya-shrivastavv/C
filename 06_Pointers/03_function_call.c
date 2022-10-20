#include <stdio.h>

int sum(int a, int b);
int sum_ptr(int *c, int *d);

int main() {

    //-------------------------------call by value--------------------------------//
//we just pass(copy) the value. 

    int a=5, b=10;

    //values of a and b printed as it is :
    printf("a = %d\nb = %d\n",a,b);
    //we are passing the value stored in the variable :
    printf("sum a + b = %d\n",sum(a,b)); 
    //a and b are not changed after been changed :
    printf("a = %d\nb = %d\n\n",a,b);

    //------------------------------call by refrence--------------------------------//
//we pass the address of the variable where value is stored.
    
    int c=5, d=10;

    //values of a and b printed as it is :
    printf("c = %d\nd = %d\n",c,d);
    //we are passing the address of the variable :
    printf("sum c + d = %d\n",sum_ptr(&c,&d)); 
    //a and b changed as oprations took place at their stored location :
    printf("c = %d\nd = %d\n",c,d);

    return 0;   
}

//a copy of a and b is passed here so any changes(in a,b) here in it will not reflect in main().
int sum(int a, int b) {
    a++;b++;
    int z = a + b;
    return z;
}

//address of a and b is pass, so changes(in a,b) here will be global.
int sum_ptr(int *c, int *d) {
    (*c)++;(*d)++;
    int e = (*c) + (*d);
    return e;
}

//call by value
// a = 5
// b = 10
// sum a + b = 17
// a = 5
// b = 10

//call by refrence
// c = 5
// d = 10
// sum c + d = 17
// c = 6
// d = 11