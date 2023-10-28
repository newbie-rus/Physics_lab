#ifndef FUNC_HEADER
#define FUNC_HEADER

#include <math.h>
#include <stdio.h>

const int N = 100;
const double EPS = 1e-3;

int preparation (float resistance[], const char* file_name);

float result(int k, float resistance[]);

int process_results(float* resistance, int M);

int compare(const void* num1, const void* num2);

int check (int K, float resistance[], float resistance_final);

bool is_zero(float x);

#endif 
