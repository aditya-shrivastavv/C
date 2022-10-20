#include <stdio.h>

int main() {
    
    int age[4]; 
  //int arr[];  //we cannot(we have to provide data) declare an array without specifying its size.
  //but we can declare like this because the number of elements specify the size
    //int marks[] = {34,45,65,23};

    printf("Age of user 1 : ");
    scanf("%d",&age[0]); //the indexing starts from 0.
    printf("Age of user 2 : ");
    scanf("%d",&age[1]);
    printf("Age of user 3 : ");
    scanf("%d",&age[2]);
    printf("Age of user 4 : ");
    scanf("%d",&age[3]); //and thus goes to n-1

    printf("%d %d %d %d \n",age[0], age[1], age[2], age[3]);

    return 0;
}
//if we want to store so many values of same type then,
//instead of creating so many variables ,we can create an array.