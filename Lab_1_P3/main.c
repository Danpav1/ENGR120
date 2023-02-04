/*
 * Author: Daniel Pavenko
 * Created: 2/3/2023
 * Class: ENGR120
 * Program that takes in two velocities as input; initialVelocity and finalVelocity. And computes the acceleration
 * as well as how long it will take for the object to come to rest given those data points.
 */
#include <stdio.h>

//method declaration(s)
double calculateAcceleration(double initialVelocity, double finalVelocity);
double calculateTimeToRest(double initialVelocity, double acceleration);

/*
 * method that calculated acceleration depending on initial velocity and final velocity and a time value
 * of 1 minute
 */
double calculateAcceleration(double initialVelocity, double finalVelocity)
{
    int time = 60;

    double acceleration = (finalVelocity - initialVelocity) / (time);

    return acceleration;
}

/*
 * method that calculates the number of seconds until the object is at rest given initial, final velocity
 * and acceleration
 */
double calculateTimeToRest(double initialVelocity, double acceleration)
{
    double time;
    double finalVelocity = 0.0;

    time = (finalVelocity - initialVelocity) / acceleration;

    return time;
}

//main method
int main()
{
    double initialVelocity, finalVelocity, acceleration, secondsToRest;

    printf("What was the cylist's initial speed?: \n");
    scanf("%lf", &initialVelocity);

    printf("What was the cylist's final speed?: \n");
    scanf("%lf", &finalVelocity);

    acceleration = calculateAcceleration(initialVelocity, finalVelocity);
    secondsToRest = calculateTimeToRest(initialVelocity, acceleration);

    printf("The acceleration equals %6.4lf m/s/s \n", acceleration);
    printf("It will take %4.2lf seconds to come to rest \n", secondsToRest);

    return 0;
}
