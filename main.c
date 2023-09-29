#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
  float resistance[100] = {};
  int M = preparation(resistance);
  int K = process_results(resistance, M);
  float resistance_final = result(K, resistance);
  int check = check(K, resistance, resistance_final);
}

int process_results(float* resistance, int M)
{
  float sum = 0;
  int K = M;

  for (size_t i = 0; i < M; i++)
    sum += resistance[i];

  float resistance_average = sum / (float)M;

  for (size_t i = 0, k = 0; i < M; i++)
  {
    if ((ABS(resistance_average - resistance[i]) / resistance[i]) > 0.03)
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
  if (num1 > num2)
    return -1;
  
  else if (num1 < num2)
    return 1;
  
  else 
    return 0;
}