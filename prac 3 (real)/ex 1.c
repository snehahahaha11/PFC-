/* future dates 
   Practical 3 weekly
   Sneha Yadav */
#include <stdio.h>
int main(){
    int today;
    int daysafter;
    int futureday;
    const char *daynames[]={"Sunday", "Monday","Tuesday","Wednesday","Thurday","Friday","Saturday"};
//Asking for today's day
    printf("Enter today's day of the week (0=Sunday, 1=Monday,......,6=Saturday)");
    scanf("%d", &today);
    if(today<0||today>6){
        printf("Invalid input. Please enter a number between 0 and 6.\n");
        return 1;
    }
    printf("Enter the number of days after today: ");
    scanf("%d", &daysafter);
    futureday= (today+daysafter)%7;
    printf("\nToday is %s\n", daynames[today]);
    printf("%d days from now will be %s\n", daysafter, daynames[futureday]);
    return 0;
}