/* max iterations
   Practical 3 
   Sneha Yadav */
#include <stdio.h>
#define MAX_ITERATIONS 100
int main(){
    int userinput;
    int iterations=0;
    printf("Guess the number (between 1 and 10): ");
    while(iterations<MAX_ITERATIONS){
        if(scanf("%d", &userinput)!=1){
            printf("Invalid input! Try again: ");
            while(getchar()!= 'n');
            iterations++;
            continue;
        }
        if(userinput==7){
            printf("Correct! You guessed it in %d attempts. \n", iterations+1);
            break;
        }
        printf("Wrong! Try again: ");
        iterations++;
    }
    if(iterations>=MAX_ITERATIONS){
        printf("Maximim attempts reached. Game over!\n");
    }
    return 0;
}