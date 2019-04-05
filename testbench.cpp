#include "matrix_multi.hpp"

int main()
{
  int first[M][M] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  int second[M][M] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  int multiply[M][M];

  matrix_multiplication(first, second, multiply);

  return 0;
}