#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random_number, guessed_number, n_guesses = 1;
    srand(time(0));
    random_number = rand() % 200 + 1;
    printf("%d",random_number);
/* rand() gives number of any size to limit the size bracket we use tricks.
number % 200 returns a number between 1 - 199, we add to to make the size
 brackett to 1 - 200 */
}