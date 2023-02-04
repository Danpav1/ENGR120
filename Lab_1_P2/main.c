/*
 * Author: Daniel Pavenko
 * Created: 2/3/2023
 * Class: ENGR120
 */
#include <stdio.h>

//method declaration
double calculateTotalCost(int initialHouseCost, int annualFuelCost, double taxRate);

//method that calculates the total house cost
double calculateTotalCost(int initialHouseCost, int annualFuelCost, double taxRate)
{
    int totalCost;
    int totalFuelCost = annualFuelCost * 5;
    double fiveYearTaxRate = taxRate * 5;

    totalCost = initialHouseCost + (initialHouseCost  * fiveYearTaxRate) + totalFuelCost;

    return totalCost;
}

//main method
int main()
{
    int initialHouseCost, annualFuelCost;
    double taxRate, totalCost;

    printf("Enter the Initial House Cost: \n");
    scanf("%d", &initialHouseCost);

    printf("Enter the Annual Fuel Cost: \n");
    scanf("%d", &annualFuelCost);

    printf("Enter the Tax Rate: \n");
    scanf("%lf", &taxRate);

    totalCost = calculateTotalCost(initialHouseCost, annualFuelCost, taxRate);

    printf("Total Cost calculated: $%4.2lf\n", totalCost);
    return 0;
}
