#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//method declarations
double leibniz(int num);
void sequenceUsingForLoop(int startTerm, int incrementAmount, int numOfTerms);
void sequenceUsingWhileLoop(int startTerm, int incrementAmount, int numOfTerms);
void exponentialSequence(int startTerm, int power, int numOfTerms);

//method that estimated PI
double leibniz(int num)
{
    double sum = 0.0;
    for (int i = 0; i < num; i++)
    {
        double term = (pow(-1, i) / (2 * i + 1));
        sum = sum + term;
    }

    return sum * 4;
}

//method that prints a sequence given an input using a for loop
void sequenceUsingForLoop(int startTerm, int incrementAmount, int numOfTerms)
{
    int num = startTerm;

    for (int i = 0; i < numOfTerms; i++)
    {
        if (i + 1 == numOfTerms)
        {
            printf("%d", num);
        }
        else
        {
            printf("%d, ", num);
        }

        num += incrementAmount;
    }

}

//method that prints a sequence given an input using a while loop
void sequenceUsingWhileLoop(int startTerm, int incrementAmount, int numOfTerms)
{
    int num = startTerm;
    int count = 0;

    while (count < numOfTerms)
    {
        if (count + 1 == numOfTerms)
        {
            printf("%d", num);
        }
        else
        {
            printf("%d, ", num);
        }

        num += incrementAmount;
        count++;
    }
}

//exponential sequence
void exponentialSequence(int startTerm, int power, int numOfTerms)
{
    int num = startTerm;

    for (int i = 0; i < numOfTerms; i++)
    {
        if (i + 1 == numOfTerms)
        {
            printf("%d", num);
        }
        else
        {
            printf("%d, ", num);
        }

        num = pow(num, power);
    }
}

//main method
int main()
{
    //method variables
    double leibnizPI = 0;
    int numOfIterations, startingTerm, incrementAmount, numOfTerms, power;

    int answer;
    printf("Which function would you like to run?");
    printf("\n1: Leibniz");
    printf("\n2: Sequence using For Loop");
    printf("\n3: Sequence using While Loop");
    printf("\n4: Exponential Sequence");
    printf("\n9: Exit\n");

    scanf("%d", &answer);

    switch (answer)
    {
        //leibniz
        case 1:
            printf("\nEnter the number of iterations: \n");
            scanf("%d", &numOfIterations);

            leibnizPI = leibniz(numOfIterations);

            printf("The value of PI calculated by the Leibniz formula is: %.10f", leibnizPI);
            break;

        //for sequence
        case 2:
            printf("Enter the following: \nstarting term, increment amount, number of terms.\n");

            scanf("%d %d %d", &startingTerm, &incrementAmount, &numOfTerms);

            sequenceUsingForLoop(startingTerm, incrementAmount, numOfTerms);

            break;

        //while sequence
        case 3:
            printf("Enter the following: \nstarting term, increment amount, number of terms.\n");

            scanf("%d %d %d", &startingTerm, &incrementAmount, &numOfTerms);

            sequenceUsingWhileLoop(startingTerm, incrementAmount, numOfTerms);

            break;

        //exponential
        case 4:
            printf("Enter the following: \nstarting term, power, number of terms.\n");

            scanf("%d %d %d", &startingTerm, &power, &numOfTerms);

            exponentialSequence(startingTerm, power, numOfTerms);

            break;

        //exit
        case 9:
            printf("Exiting");
            exit(0);

        //if the input is invalid
        default:
            printf("Invalid Input");
            exit(0);
    }

    return 0;
}