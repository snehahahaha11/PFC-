/* Electricity bill
Practical 3, Part 2
 Sneha Yadav*/
#include <stdio.h>
int main(){
    int previousmetre, currentmetre, day, month;
    printf("Enter previous reading, current reading, day and month:\n");
    // Checking if 4 numbers are entered
    if(scanf("%d %d %d %d", &previousmetre, &currentmetre, &day, &month) != 4) {
        printf("Error:Invalid input format\n");
        return 1;
    }
    printf("%d %d %d %d\n", previousmetre, currentmetre, day, month);
    if(currentmetre <0 || currentmetre >9999)
        printf("Error:current meter reading out of range\n");
    if(previousmetre <0 || previousmetre >9999)
        printf("Error:previous meter reading out of range\n");
    if(previousmetre>currentmetre)
        printf("Error:previous reading is more than present reading\n");
    if(month<1 || month>12)  // Checking month range
        printf("Error:month out of range\n");
    else if(month >=1 && month <=12) {
        if (day<1 || day>31)
            printf("Error: invalid day for this month\n");
    }
    return 0;
}