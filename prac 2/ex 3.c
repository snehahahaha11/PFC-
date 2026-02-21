/*Print montly expenduture
prac 2, part 2 (c)
Sneha Yadav*/

#include <stdio.h>
int main () {

    float foodExpenses= 233.0;
    float leisuresExpenses = 111.0;
    float clothesExpenses = 349.0;
    float accomodationExpenses = 678;
    float travelExpenses = 138;
    float totalSpent;

    totalSpent =  foodExpenses + leisuresExpenses + clothesExpenses + accomodationExpenses+ travelExpenses;

    printf("The total expenditure for this month $%.2f\n", totalSpent);
    
    return 0;
}