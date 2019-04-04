#include <stdio.h>
#include"matrix_multi.h"

int main ()
{
  int first[M][N] ={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

    int second[M][N] ={
     {1,2,3},
    {4,5,6},
    {7,8,9}
  };

     int multiply[M][N]; 
   
  

  matrix_multiplication(first,second,multiply);


  
 









  return 0;
}