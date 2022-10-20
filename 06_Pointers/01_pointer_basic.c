#include <stdio.h>

int main() {
    int n = 19;
    int *pointer_n = &n;

//simply prints value stored in n
    printf("%u\n",n); //19

//prints address of variable n
    printf("%u\n",&n); //6422300

//n ke address pe kya value he, wahi jo n me stored he
    printf("%u\n",*(&n)); //19

//pointer me kya stored hai n ka address, toh n ka address print hua
    printf("%u\n",pointer_n); //6422300

//pointer bhi ek tarah ka variable he, toh us variable ka kya address he
    printf("%u\n",&pointer_n); //6422296

//pointer ke stored address pe kya value stored hai
    printf("%u\n",*pointer_n); //19

//pointer ke address par kya value stored hai, n ka address, aur kya.
    printf("%u\n",*(&pointer_n)); //6422300
    
    return 0;
}