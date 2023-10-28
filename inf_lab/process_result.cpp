#include "func.h"

int process_results(float* resistance, int M)
{
  float sum = 0;
  int K = M;

  for (size_t i = 0; i < M; i++)
    sum += resistance[i];

  float resistance_average = sum / (float)M;

  for (size_t i = 0; i < M; i++)
  {
    if ((abs(resistance_average - resistance[i]) / resistance[i]) > 0.03)
    {
      K--;
      resistance[i] = -1;
    }
  }
  
  qsort(resistance, (size_t)M, sizeof(float), compare);
  
  return K;
}

int compare(const void* num1, const void* num2)
{
  if (*(float*)num1 > *(float*)num2)
    return -1;
  
  else if (*(float*)num1 < *(float*)num2)
    return 1;
  
  else 
    return 0;
}