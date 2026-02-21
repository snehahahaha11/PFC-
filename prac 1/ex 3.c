#include <stdio.h>
int main()
{
   double monthlySaving;
   double InterestRate = 0.05/12;
   double accountValue= 0.0;
   int month;
   
   printf("Enter the monthly Saving amount:  $");
   scanf("%lf", &monthlySaving);

   for(month =  1; month<=6; month ++)
{
    accountValue+= monthlySaving;
    accountValue*= (1 + InterestRate);
    printf("After %d months, the  Account value is $%.3f\n", month, accountValue);

}
printf("\nAfter 6 months, the Account value is $%.3f\n", accountValue);

return 0;
}