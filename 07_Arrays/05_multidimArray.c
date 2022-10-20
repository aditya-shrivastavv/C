/* write a program to store the marks of 4 students in 5 subjects using multidimensional
arrays ? */

#include <stdio.h>

int main() {
    int Marks[4][5];

    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            printf("Marks of Student %d in Subject %d = ",i+1 ,j+1);
            scanf("%d",&Marks[i][j]);
        }
    }
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            printf("Student %d Subject %d = %d\n",i+1 , j+1 ,Marks[i][j]);
        }
    }
    
    return 0;
}
// again made on my own so no doubt about it.