/*Print montly expenduture
prac 2, part 2 (d)
Sneha Yadav*/

#include <stdio.h>
int main () {

    float foodExpenses;
    printf("Enter thge expenses for food: ");
    scanf("%f", &foodExpenses);

    float leisuresExpenses;
    printf("Enter the expenses for leisure: ");
    scanf("%f", &leisuresExpenses);

    float clothesExpenses;
    printf("Enter the expenses for clothes: ");
    scanf("%f", &clothesExpenses);

    float accomodationExpenses;
    printf("Enter the expenses for accomodation: ");
    scanf("%f", &accomodationExpenses);

    float travelExpenses;
    printf("Enter the expenses for travel:b");
    scanf("%f", &travelExpenses);

    float totalSpent;

    totalSpent =  foodExpenses + leisuresExpenses + clothesExpenses + accomodationExpenses+ travelExpenses;

    printf("The total expenditure for this month $%.2f\n",  totalSpent);
    
    return 0;
}