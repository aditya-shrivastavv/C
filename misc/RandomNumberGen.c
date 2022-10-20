#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number_generated;
    srand(time(0));
    number_generated = rand()%100 + 1;
    printf("the number_generated is %d",number_generated);
}
