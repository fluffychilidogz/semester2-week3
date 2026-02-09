
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Bahaeddine Dayya
 * ID: 202003508
 */

   int main(void)
{
    // define and initialise variables for the problem data 
   
   float salary = 36250.00;
   float n_i = 0.08;
   float tax_percent = 0.15;
   float contributed_n_i;
   float contributed_tax;
   float take_home;

    // calculate the deductions and final take-home salary

   contributed_n_i = salary * n_i;
   contributed_tax = ((salary - contributed_n_i - 12500) * tax_percent);
   take_home = salary - contributed_n_i - contributed_tax;
   

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
   printf("Salary £%.2f\n", salary);
    //printf("NI contribution £...",var_name);
   printf("NI contribution £%.2f\n", contributed_n_i);
    //printf("Tax contribution £...",var_name);
   printf("Tax contribution £%.2f\n", contributed_tax);
    //printf("Take home salary £...",var_name);
   printf("Take home salary £%.2f\n", take_home);

    return 0;
 }