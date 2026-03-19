/* StudentScoresB.c
   Practical 6, Part 1(b)
   Using constants for array size
   Sneha Yadav*/

#include <stdio.h>
#define NUM_STUDENTS 10

int main() {
    int scores[NUM_STUDENTS];
    int sum=0;
    double average;
    
    printf("Enter %d student scores:\n", NUM_STUDENTS);
    for (int i=0; i<NUM_STUDENTS; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i=0; i<NUM_STUDENTS; i++) {
        sum+=scores[i];
    }
    
    average=(double)sum/NUM_STUDENTS;
    
    printf("\nIndividual Scores:\n");
    for (int i=0; i<NUM_STUDENTS; i++) {
        printf("Student %d: %d\n", i+1, scores[i]);
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);
    
    return 0;
}