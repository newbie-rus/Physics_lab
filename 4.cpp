#include "4.h"

int EPS = 1e-9;

int check (int K, float resistance[], float resistance_final);
bool is_zero(float x);

int check (int K, float resistance[], float resistance_final)
{
    float d = 0

    for(int i = 0; i < K; i++)
    {
        d += resistance[i] - resistance_final;
    }

    if(is_zero(d / k))
        return 1;
    return 0;
}

bool is_zero(float x)
{
    return (fabs (a - b) < EPS);
}
