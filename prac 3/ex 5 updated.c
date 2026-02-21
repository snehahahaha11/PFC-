/*Print montly expenduture
prac 2, part 3 (updated e)
Sneha Yadav*/

#include <stdio.h>
int main () {
    const int ACCOMODATION_EXPENSES = 657; //constant value 

    float foodExpenses;
    while(1){
        printf("Enter the expenses for food: ");
        if( scanf("%f", &foodExpenses) ==1 && foodExpenses>=0){
             break;
        }else{
            printf("Invalid input. Please enter a whole number.\n");
            while(getchar()!='\n');
        } 
    }
    
    float leisuresExpenses;
    while(1){
        printf("Enter the expenses for leisure: ");
        if (scanf("%f", &leisuresExpenses)==1 && leisuresExpenses>=0){     
            break;
        }else{
            printf("Invalid input. Please enter a  whole number.\n");
            while(getchar()!='\n');
        }
    }

    float clothesExpenses;
    while(1){
        printf("Enter the expenses for clothes: ");
        if(scanf("%f", &clothesExpenses) ==1 && leisuresExpenses>=0){
            break;    
        }else{
            printf("Invalid input. please enter a number.\n");
            while(getchar()!='\n');
        }
    }

    float travelExpenses;
    while(1){
        printf("Enter the expenses for travel: ");
        if (scanf("%f", &travelExpenses)==1 &&travelExpenses>=0){
            break;
        } else{
            printf("Invalid input. Please enter a whole number.\n");
            while(getchar()!='\n');
        }
    }   

    float totalSpent;

    totalSpent =  foodExpenses + leisuresExpenses + clothesExpenses + ACCOMODATION_EXPENSES + travelExpenses;

    printf("The total expenditure for this month $%.2f\n",  totalSpent);
    
    return 0;
}