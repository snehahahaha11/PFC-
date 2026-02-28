/* Secure login ssytem
   Practical 3 weekly
   Sneha Yadav */
#include <stdio.h>
int main(){
    int CORRECT_PIN=9814;
    int maxattempts=3;
    int attempts=0;
    int pin;
    int result;
    while(attempts<maxattempts){
        printf("Enter the PIN: ");
        result =scanf("%d", &pin);
        if(result!= 1){
            printf("Error: Invalid Input. Please enter numeric values.\n");
            while(getchar()!='\n');
            continue;
        }
        if (pin==CORRECT_PIN){
            printf("Access Granted!\n");
            return 0;
        }
        attempts++;
        if(attempts>=maxattempts){
            printf("Access Denied.  Account Locked.\n");
        }
        else
        {
            printf("Wrong PIN. %d attemt(s) left.\n",maxattempts-attempts);
        }
    }
    return 0;
}