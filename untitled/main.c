#include <stdio.h>
#define KMS_PER_MILE 1.609

int main()
{
    double miles = 70;
    double kms = KMS_PER_MILE * miles;
    printf("Hello, World!\n");
    printf("%lf\n", kms);
    return 0;
}
