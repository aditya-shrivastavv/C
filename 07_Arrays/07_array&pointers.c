#include <stdio.h>

int main() {
    int a=9;
    int arr[] = {7,8,5,4,6};

    int* p1 = &a; //for a variable & sign should be used to store/send a address
    int* p2 = arr; /* for a array it's not neccessary ,it will automatically point to the
    first block/location/value in the pointer */

    printf("%u\n",p1);
    printf("%u\n",p2);

    return 0;
}