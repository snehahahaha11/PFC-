/* Sum calculator
   Practical 3 
   Sneha Yadav */
#include <stdio.h>
int main(){
    int number;
    int sum=0;
    int count=0;
    printf("===Sum Calculator===\n");
    printf("Enter postibe numbers (negative to stop):\n");
    while(1){  //to  break infinite loop
        printf("Enter number: "); 
        if (scanf("%d", &number) !=1){ 
            printf("Invalid input\n");
            //clear input buffer 
            while (getchar()!=1) 
            continue; 
        }
        if(number<0){
            break; //stopping when negative number
        }
        sum+=number;
        count++;
        printf("Current sum: %d\n",sum);
    }
    printf("\nFinal sum: %d\n", sum);
    printf("Total numbers entered: %d\n", count);
    return 0;
}