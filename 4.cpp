#include "4.h"

double EPS = 1e-9;
//
int check (int K, float resistance[], float resistance_final);
bool is_zero(float x);
//
int check (int K, float resistance[], float resistance_final)
{
    float d = 0;

    for(int i = 0; i < K; i++)
    {
        d += resistance[i] - resistance_final;
    }

    if(is_zero(d / (float)K))
        return 1;
    return 0;
}

bool is_zero(float x)
{
    return ((double)fabs(x) < EPS);
}
