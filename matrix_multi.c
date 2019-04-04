#include"matrix_multi.h"
#include <stdio.h>
 
void matrix_multiplication(int first[][], int second[][],int  multiply[][])
{
  int c=0; 
  int d=0 ;
  int k=0;
  int sum = 0;
  
  first[M][N];
  second[N][K];
  multiply[M][K];

 
    for (c = 0; c < M; c++) {
      for (d = 0; d < K; d++) {
        for (k = 0; k < N; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < M; c++) {
      for (d = 0; d < K; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  
 
  
}