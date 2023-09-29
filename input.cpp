#include "input.h"

int preparation (float resistance[], const char* file_name)
{
    float voltage[N];
    float current[N];

    FILE* file = fopen (file_name, "r");

    int num = 0;
    float u = 0;
    float i = 0;
    while (fscanf (file, "%f %f", &u, &i) == 2)
    {
        voltage[num] = u;
        current[num] = i;
        num++;
    }
    fclose (file);

    for (int i = 0; i < num; i++)
        resistance[i] = voltage[i] / current[i];

    return num;
}
