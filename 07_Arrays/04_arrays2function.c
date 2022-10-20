#include <stdio.h>

void printArray(int* ptrArray, int n);

int main() {
    int arr[] = {89,85,65,75,20,14};
    printArray(&arr[0],6); // passing the array to the function.
//  printArray(arr,6); // passing the array to the function.
/* the 7th line and 8th line serves the same purpose ,im more comfortable with 7th line */    
    return 0;
}

void printArray(int *ptrArray, int n) {
    for (int i=0; i<n; i++) {
        printf("Element %d of Array is %d\n",i+1, *(ptrArray+i));
    }
} // *(ptrArray+i) accesses the next value, int size is 4 so, (ptrArray+i) pointer points to
// the next memory address (ptrArray+i) => (memory_address+4)