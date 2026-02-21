#include <stdio.h>
int main()
{
    double population = 312032486;
    int  seconds_per_min= 60;
    int minutes_per_hour= 60;
    int hours_per_day= 24;
    int days_per_year=365;

    int seconds_per_year= seconds_per_min* minutes_per_hour*hours_per_day*days_per_year;

    double births = seconds_per_year/7.0;
    double deaths = seconds_per_year/ 13.0;
    double immigrants = seconds_per_year/45.0;

    double total= births - deaths + immigrants ;
    
    printf("US population projection for next 5 years\n");
    printf("Birth per year:     %.0f\n",births);
    printf("Death per year:     %.0f\n", deaths );
    printf("Immigrant per year:    %.0f\n", immigrants );
    printf("Net change per year:    %.0f\n\n", total);
    
    int year;
    for (year= 1; year<= 5; year ++)
    {
        population+=total;
        printf("Year%d: %.0f\n", year, population);
    }
    return 0;
}