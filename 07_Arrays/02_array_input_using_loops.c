#include <stdio.h>

int main() {
    
    int marks[5];

    for (int i=0; i<5; i++) {
        printf("Enter marks of Student %d :",i+1); // i+1 is due to make indexing convinient.
        scanf("%d",&marks[i]);
    }
    
    printf("%d %d %d %d %d\n",marks[0],marks[1],marks[2],marks[3],marks[4]);

    return 0; 
}