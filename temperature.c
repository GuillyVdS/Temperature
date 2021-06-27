#include "stdio.h"
#include "stdlib.h"

/* this project requires sanitation to be added for completedness and reliability*/


void takeInput(double *lower, double *upper, int *step){ //organises three input values into single function
  printf("Please provide lower temperature limit (In celcius): \n");
  scanf("%lf", lower);
  printf("Please provide upper temperature limit (In celcius): \n");
  scanf("%lf", upper);
  printf("Please provide a step to increase temperature with: \n");
  scanf("%d", step);
}

double convertToFarenheit(double celcius){ //formula to convert celcius to fahrenheit

  return (celcius/5*9)+32;
}

void printResult(double lower, double upper, int step){ //prints the results in celcius and fahrenheit
  double checkvalue = lower;

  printf("Celcius          Fahrenheit\n");
  printf("-------          ----------\n");

  /*for as long as the checkvalue does not exceed the upper value, a new line will be printed with C and F values,
   incrementing the celcius value by 2 on each iteration*/
  while(checkvalue < upper)
  {
    printf(" %.2lf       %.2lf\n" , checkvalue, convertToFarenheit(checkvalue));
    checkvalue += step;
  }

  printf("---------------------------\n");

}


int main(){

  double lower, upper;
  int step;

  while(1)
  {
    takeInput(&lower, &upper, &step);
    printResult(lower, upper, step);
  }


}
