#include "input.h"

const char* file_name = "input.txt";

int main ()
{
    float resistance[N] = {};
    int m = preparation (resistance, file_name);
    for (int i = 0; i < m; i++)
        printf ("%f\n", resistance[i]);
    return 0;
}
