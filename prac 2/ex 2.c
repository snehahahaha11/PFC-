/*Print montly expenduture
prac 2, part 2 (b)
Sneha Yadav*/

#include <stdio.h>
int main () {

    float foodExpenses= 233.0;
    float leisuresExpenses = 111.0;
    float clothesExpenses = 349.0;
    float totalSpent;

    totalSpent =  foodExpenses + leisuresExpenses + clothesExpenses;

    printf("The total expenditure for this month $%.2f\n", totalSpent);
    
    return 0;
}