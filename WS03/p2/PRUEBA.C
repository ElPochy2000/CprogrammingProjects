   #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double GRAMS_IN_LBS = 453.5924;
    double BAG1,calculation;
    printf("askforweight");
    scanf("%lf",&BAG1);
    calculation=(double)BAG1/GRAMS_IN_LBS;
    printf("%6.3lf",calculation);

    return 0;
}