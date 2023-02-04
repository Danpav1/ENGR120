/*
 * Author: Daniel Pavenko
 * Created: 2/3/2023
 * Class: ENGR120
 */
#include <stdio.h>
#include <math.h>

//method declaration
double paymentCalculator(double principle, double annualInterestRate, double totalNumOfPayments);

//method that calculates a monthly payment based on the input
double paymentCalculator(double principle, double annualInterestRate, double totalNumOfPayments)
{
    double monthlyInterestRate = annualInterestRate / 1200;
    double monthlyPayment;

    monthlyPayment = (monthlyInterestRate * principle) / (1 - pow((1 + monthlyInterestRate), -totalNumOfPayments));

    return monthlyPayment;
}

//main method
int main()
{
    double purchasePrice, downPayment, annualInterestRate, totalNumOfPayments, calculatedMonthlyPayment, principle;

    printf("Enter the purchase price: \n");
    scanf("%lf", &purchasePrice);

    printf("Enter the down payment amount: \n");
    scanf("%lf", &downPayment);

    printf("Enter the annual interest rate: \n");
    scanf("%lf", &annualInterestRate);

    printf("Enter the total number of payments in months: \n");
    scanf("%lf", &totalNumOfPayments);

    principle = purchasePrice - downPayment;
    calculatedMonthlyPayment = paymentCalculator(principle, annualInterestRate, totalNumOfPayments);

    printf("Your total borrowed amount is: $%4.2lf \n", principle);
    printf("Your monthly payment is: $%4.2lf \n", calculatedMonthlyPayment);

    return 0;
}
