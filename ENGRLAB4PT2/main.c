#include <stdio.h>

//methods for colors
void red ()
{
    printf("\033[1;31m");
}
void yellow ()
{
    printf("\033[1;33m");
}
void blue ()
{
    printf("\033[1;34m");
}
void reset ()
{
    printf("\033[0m");
}

//method variables
int main()
{
    double x, y;

    printf("Enter X and Y values: \n");
    scanf("%lf%lf", &x, &y);

    //sets text color to blue
    blue();

    if (x == 0.0 && y == 0.0)
    {
        printf("(%.1f, %.1f) is at the origin.", x, y);
    }
    else if (x == 0.0)
    {
        printf("(%.1f, %.1f) is at the y-axis.", x, y);
    }
    else if (y == 0.0)
    {
        printf("(%.1f, %.1f) is at the x axis.", x, y);
    }
    else if (x < 0.0 && y < 0.0)
    {
        printf("(%.1f, %.1f) is in quadrant III.", x, y);
    }
    else if (x > 0.0 && y > 0.0)
    {
        printf("(%.1f, %.1f) is in quadrant I.", x, y);
    }
    else if (x < 0.0 && y > 0.0)
    {
        printf("(%.1f, %.1f) is in quadrant II.", x, y);
    }
    else if (x > 0.0 && y < 0.0)
    {
        printf("(%.1f, %.1f) is in quadrant IV.", x, y);
    }

    //resets text color
    reset();

    return 0;
}
