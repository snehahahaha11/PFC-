/* ElectricityBillB.c
   Practical 3 
   Sneha Yadav */

#include <stdio.h>
int main() {
    int customers, i;
    int previousmetre, currentmetre, day, month;
    int units;
    int totalUnits = 0;
    printf("How many customers to process (max 10): ");
    scanf("%d", &customers);
    if (customers < 1 || customers > 10) {
        printf("Error: Number of customers must be between 1 and 10\n");
        return 1;
    }
    for (i = 1; i <= customers; i++) {
        printf("\nCustomer %d\n", i);
        printf("Enter previous reading, current reading, day and month:\n");
        if (scanf("%d %d %d %d", &previousmetre, &currentmetre, &day, &month) != 4) {
            printf("Error: Invalid input format\n");
            return 1;
        }
// Validation
        if (currentmetre < 0 || currentmetre > 9999) {
            printf("Error: Current meter reading out of range\n");
            continue;
        }
        if (previousmetre < 0 || previousmetre > 9999) {
            printf("Error: Previous meter reading out of range\n");
            continue;
        }
        if (previousmetre > currentmetre) {
            printf("Error: Previous reading is more than present reading\n");
            continue;
        }
        if (month < 1 || month > 12) {
            printf("Error: Month out of range\n");
            continue;
        }
        if (day < 1 || day > 31) {
            printf("Error: Invalid day\n");
            continue;
        }
// Calculate units
        units = currentmetre - previousmetre;
        totalUnits = totalUnits + units;
        printf("Units used: %d\n", units);
    }
    printf("\n===== SUMMARY =====\n");
    printf("Total customers processed: %d\n", customers);
    printf("Total electricity units used: %d\n", totalUnits);
    return 0;
}