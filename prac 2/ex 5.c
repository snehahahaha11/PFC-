/*Print montly expenduture
prac 2, part 2 (e)
Sneha Yadav*/

#include <stdio.h>
int main () {
    const int accomodationExpenses = 657; //constant value 

    float foodExpenses;
    printf("Enter the expenses for food: ");
    scanf("%f", &foodExpenses);

    float leisuresExpenses;
    printf("Enter the expenses for leisure: ");
    scanf("%f", &leisuresExpenses);

    float clothesExpenses;
    printf("Enter the expenses for clothes: ");
    scanf("%f", &clothesExpenses);

    float travelExpenses;
    printf("Enter the expenses for travel: ");
    scanf("%f", &travelExpenses);

    float totalSpent;

    totalSpent =  foodExpenses + leisuresExpenses + clothesExpenses + accomodationExpenses+ travelExpenses;

    printf("The total expenditure for this month $%.2f\n",  totalSpent);
    
    return 0;
}