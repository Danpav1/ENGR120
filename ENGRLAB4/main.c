#include <stdio.h>

//method declarations
double calcAverageTemp(char firstLetter);

//instance variables
int temps[12] = {35, 15, -10, 33, 60, 41, 20, 32, 63, 70, 55, 55};

//method that calculates temp average
double calcAverageTemp(char firstLetter)
{
    double calculatedAverage;
    int dayCount = 1;
    int sum = 0;

    if(firstLetter >= 65 && firstLetter < 69)
    {
        while (dayCount <= 9)
        {
            sum += temps[dayCount - 1];
            dayCount++;
        }

        dayCount--;
        calculatedAverage = (double)sum / (double)dayCount;
    }
    else if (firstLetter >= 69 && firstLetter < 77)
    {
        while (dayCount <= 8)
        {
            sum += temps[dayCount - 1];
            dayCount++;
        }

        dayCount--;
        calculatedAverage = (double)sum / (double)dayCount;
    }
    else if (firstLetter >= 77 && firstLetter < 80)
    {
        while (dayCount <= 7)
        {
            sum += temps[dayCount - 1];
            dayCount++;
        }

        dayCount--;
        calculatedAverage = (double)sum / (double)dayCount;
    }
    else if (firstLetter >= 80)
    {
        while (dayCount <= 10)
        {
            sum += temps[dayCount - 1];
            dayCount++;
        }

        dayCount--;
        calculatedAverage = (double)sum / (double)dayCount;
    }

    return calculatedAverage;
}

//main method
int main()
{
    char firstLetter;
    double calculatedAverage;

    printf("What is the first letter of your first name?\n");
    scanf("%c", &firstLetter);

    calculatedAverage = calcAverageTemp(firstLetter);

    printf("The calculated average: %f", calculatedAverage);

    return 0;
}
