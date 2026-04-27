#include <stdio.h>
#include <math.h>

float recurr(int iter)
{
  if(iter == 1)
    {
      return exp(1.0);
    }

  return iter * recurr(iter-1) - iter;

}

int main()
{
  //u(i+1) = iu(i)-i && u(1) = e

  int iterations = 25;
  float recurr_f = exp(1.0);
  double recurr_d = exp(1.0);
  for(int i = 2; i <= iterations; i++)
    {
      //recurr_f = i * recurr_f - i;
      recurr_d = i * recurr_d - i;
      
      
    }

  recurr_f = recurr(25);
  
  printf("FLOAT: %.10f\n", recurr_f);
  printf("DOUBL: %.10f\n", recurr_d);
  
  return 0;
}

