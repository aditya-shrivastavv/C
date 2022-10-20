#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int random_number, guessed_number, n_guesses = 1;
    srand(time(0));
    random_number = rand() % 200 + 1;
/* rand() gives number of any size to limit the size bracket we use tricks.
number % 200 returns a number between 1 - 199, we add to to make the size brackett to 1 - 200 */

//the loop keeps running till the correct number is guessed.
    do {
        printf("Guess the Number between 1 - 200 : ");
        scanf("%d",&guessed_number);
        if (guessed_number > random_number) {
            printf("LOWER NUMBER PLEASE !\n");
        }
        else if (guessed_number < random_number) {
            printf("HIGHER NUMBER PLEASE !\n");
        }
        else {
            printf("You Got it in %d Attempts !!! \n",n_guesses);
        }
        n_guesses++;
    } while (guessed_number != random_number);

    return 0;
}

//rand() is a function in <stdlib> ,which generates random numbers. 
//srand() is a function in <stdlib> ,which which is used to initialize random number generators.

//If srand() is not called, the rand() seed is set as if srand(1) were called at the program start.  
//Seed is a parent number by the help of which random numbers are generated.

/* Standard practice is to use the result of a call to srand(time(0)) as the seed. 
    because, time() returns a time_t value which varies every time and hence the 
    seed varies for every program call. */

//executions
// rand() --> 2 2 2 2 2 .......
// srand() + rand() --> 2 12 4 8 .....