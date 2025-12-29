#include <stdio.h>
#include <math.h>

int main()
{
    float celcius = 0.0f;
    float fahrenheit = 0.0f;
    char choice = '\0';

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if(choice == 'C'){
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celcius, fahrenheit);
    } else if (choice == 'F'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celcius);
    } 
    else{
        printf("Invalid Choice! Please select C or F\n");
    }










}