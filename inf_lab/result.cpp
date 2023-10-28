#include "func.h"


float result(int k, float* resistance)
{
    float sum = 0;

    for (int i = 0; i < k; ++i)
    {
        sum += resistance[i];
    }

    float resistance_final = sum / k;

    float sum1 = 0;

    for (int i = 0; i < k; ++i)
    {
        sum1 += (resistance[i] - resistance_final) * (resistance[i] - resistance_final);
    }

    float deviation = sqrt(sum1) / k;

    printf("Искомое сопротивление:  %f\n"
           "Среднеквадратичное отклонение:  %f\n", resistance_final, deviation);

    return resistance_final;
}