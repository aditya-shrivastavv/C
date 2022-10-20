#include <stdio.h>

int main() {
    char company[] = {'L','e','n','o','v','o','\0'}; // string initialization METHOD 1.

    char city[] = "Mandsaur"; // string initialization METHOD 2.
// In this case C adds the null character '\0' automatically.
    return 0;
}

// 1. strings are stored in contiguous blocks of memory, just like values in a array.