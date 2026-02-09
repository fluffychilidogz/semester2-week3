
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Bahaeddine Dayya
 * ID: 202003508
 */

   int main(void)
{
    // define and initialise variables for the problem data 
   
   int salary = 36250;
   float n_i = 0.08;
   float tax_percent = 0.15;
   float n_i_c;
   float tax_c;
   float take_home;

    // calculate the deductions and final take-home salary

   tax_c = salary * tax_percent;
   n_i_c = salary * n_i;
   take_home = salary - tax_c - n_i_c;
   

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
   printf("Salary £%d\n", salary);
    //printf("NI contribution £...",var_name);
   printf("NI contribution £%.2f\n", n_i_c);
    //printf("Tax contribution £...",var_name);
   printf("Tax contribution £%.2f\n", tax_c);
    //printf("Take home salary £...",var_name);
   printf("Take home salary £%.2f\n", take_home);

    return 0;
 }