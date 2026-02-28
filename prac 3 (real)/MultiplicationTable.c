/* multiplication table
   Practical 3 
   Sneha Yadav */
#include <stdio.h>
#define MAX_SIZE 9
int main() {
    int usersize;   
    printf("Enter table size (1-%d): ", MAX_SIZE);   
// ✓ SAFE: Validate user input
    if (scanf("%d", &usersize) !=1) {
        printf("Error: Invalid input!\n");
        return 1;
    }   
// ✓ SAFE: Validate range to prevent excessive iterations
    if (usersize<1 || usersize>MAX_SIZE) {
        printf("Error: Size must be between 1 and %d!\n", MAX_SIZE);
        return 1;
    }   
 // Print header
    printf("\nMultiplication Table (%dx%d):\n", usersize, usersize);
    printf("     ");
    for (int i=1; i<=usersize; i++) {
        printf("%4d", i);
    }
    printf("\n");
    printf("     ");
    for (int i =1; i <=usersize; i++) {
        printf("----");
    }
    printf("\n");
    
// Nested loops to print the multiplication table
    for (int i =1; i <=usersize; i++) {
        printf("%3d |", i);
        for (int j=1; j <=usersize; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }    
    return 0;
}
