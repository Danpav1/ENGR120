/*
 * program for ENGR120 Lab #2 that simulates a coin flip 60 million times
 * author : Daniel Pavenko
 * 2/15/23
 * VERSION 3.24
 */
#include <stdio.h>
#include <stdlib.h>

//method declaration(s)
void coinFlipSimulation(int amountOfIterations);

//method variables
unsigned int numOfHeads = 0;
unsigned int numOfTails = 0;

//method that simulates a coin flip for x amount of times
void coinFlipSimulation(int amountOfIterations)
{
    int num;
    for (int i = 0; i <= amountOfIterations; ++i)
    {
        num = 1 + rand() % 2; //generates a num from 1 to 2 inclusive

        switch (num)
        {
            case 1:
                ++numOfHeads;
                break;

            case 2:
                ++numOfTails;
                break;

            default:
                printf("ERROR");
        }
    }
}

int main()
{
    int numOfIterations;
    printf("How many iterations of the sim would you like to run?:\n");
    scanf("%d", &numOfIterations);

    coinFlipSimulation(numOfIterations);

    printf("Number of Iterations: %d\n", numOfIterations);
    printf("Number of Heads: %d\n", numOfHeads);
    printf("Number of Tails: %d\n", numOfTails);

    return 0;
}
