#include "func.h"


int main()
{
  float resistance[100] = {0};
  int M = preparation(resistance, "input.txt");
  int K = process_results(resistance, M);
  float resistance_final = result(K, resistance);
  int check_f = check(K, resistance, resistance_final);
}

