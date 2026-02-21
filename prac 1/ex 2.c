#include <stdio.h>
int main()
{
    double celcius, fahrenheit;
    printf("Enter the temperature in Celcius: ");
    scanf("%1f", &celcius);

    fahrenheit =  (9.0/5) * celcius + 32;
    printf("Temperature in fahrenheit: %.2f\n", fahrenheit);
    return 0;

}