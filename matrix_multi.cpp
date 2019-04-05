#include"matrix_multi.hpp"
#include <stdio.h>
 
void matrix_multiplication(int first[M][M], int second[M][M],int  multiply[M][M])
{
  int c=0; 
  int d=0 ;
  int k=0;
  int sum = 0;
   
    loop1: for (c = 0; c < M; c++) {
      loop2: for (d = 0; d < M; d++) {
        loop3: for (k = 0; k < M; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 

 return;
  
}