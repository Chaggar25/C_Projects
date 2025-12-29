#include <stdio.h>
#include <math.h>

int main() 
{

    // declare the variables you need
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int time_compounded = 0;
    double total = 0.0;

    printf("Compund Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);   

    printf("Enter the Interest Rate % (r): ");
    scanf("%lf", &rate);  
    rate = rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter number of times compounded per year (n): ");
    scanf("%d", &time_compounded);

    total = principal * pow(1 + rate / time_compounded, time_compounded * years);

    printf("After %d years the total will be $%.2lf", years , total);

     
    


}