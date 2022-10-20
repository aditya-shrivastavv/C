// # self-made
#include <stdio.h>

int main() {
    int Table[10];
    int n;

    printf("Which number table do you want to store : ");
    scanf("%d",&n);

    for (int i=0; i<10; i++) {
        printf("%d x %d = ", n, i+1);
        scanf("%d",&Table[i]);
    }
    for (int i=0; i<10; i++) {
        printf("%d %d za %d\n", n, i+1, Table[i]);
    }

    return 0;
}