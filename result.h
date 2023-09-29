#include <stdlib.h>

#include <stdio.h>

#include <math.h>

float result(int k, float resistance[]);

float result(int k, float* resistance)
{
    float sum = 0;

    for (int i = 0; i < k; ++i)
    {
        sum = sum + resistance[i];
    }

    float resistance_final = sum / k;

    float sum1 = 0;

    for (int i = 0; i < k; ++i)
    {
        sum1 = sum1 + (resistance[i] - resistance_final) * (resistance[i] - resistance_final);
    }

    float deviation = sqrt(sum1) / k;

    printf("%.3f +- %.3f", resistance_final, deviation);

    return resistance_final;
}