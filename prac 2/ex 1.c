/*Print montly expenduture
prac 2, part 2 (a)
Sneha Yadav*/

#include <stdio.h>
int main () {

    float foodExpenses= 300.0;
    float leisuresExpenses = 100.0;
    float clothesExpenses = 50.0;
    float totalSpent;

    totalSpent =  foodExpenses + leisuresExpenses + clothesExpenses;

    printf("The total expenditure for this month $%.2f\n", totalSpent);
    
    return 0;
}