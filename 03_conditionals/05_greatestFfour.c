/* write a program to print the greatest of the four numbers enterd by user */
#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    printf("enter the four numbers one by one\n");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    if (n1 > n2 && n1 > n3 && n1 > n4) { 
    printf("%d is the greatest",n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4) { 
    printf("%d is the greatest",n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4) { 
    printf("%d is the greatest",n3);
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3) { 
    printf("%d is the greatest",n4);
    }

    return 0;
}