#include <stdio.h>

void AverageNO_R(int x, int y, int z); //this returns no value

float Average_R(int x, int y, int z); //returns a value of datatype float

int main() {
    int a, b, c;
    printf("Enter Three Numbers :-");scanf("%d %d %d",&a,&b,&c);

    AverageNO_R(a,b,c);                                   //void function call
    printf("Average of Three (returned value)= %.2f\n",Average_R(a,b,c)); //float function call

    return 0;
}

void AverageNO_R(int x, int y, int z) { //we are not expecting that this will return any value so we have written print statement inside it.
    printf("Average of Three (direct value)= %.2f\n",(float)(x+y+z)/3);
}   // by using (float) we are forcing the compiler to keep the value in float


float Average_R(int x, int y, int z) { //we know that this can return a value ,so we are requesting a value of datatype float
    return (float)(x+y+z)/3;
}   // by using (float) we are forcing the compiler to keep the value in float
