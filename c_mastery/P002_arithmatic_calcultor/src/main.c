//P002_arithmetic_calculator.

#include <stdio.h>
#include <stdint.h>

int main(void)
{
   int first_number;
   int second_number;

   int addition;
   int subtraction;
   int multiplication;
   float division;
   int remainder;

   printf("===== ESM-P002 =====\nSimple calculator\n\n");
   
   printf("Enter first number  : ");
   scanf("%d",&first_number);

   printf("Enter second number : ");
   scanf("%d",&second_number);

   addition = first_number + second_number;
   subtraction = first_number - second_number;
   multiplication = first_number * second_number;


   printf("\n----- Result -----\n");
   
   printf("Addition       : %d\n",addition);
   printf("Subtraction    : %d\n",subtraction);
   printf("Multiplication : %d\n",multiplication);

   if (second_number != 0 )
   {
   	division = (float) first_number / second_number;
   	remainder = first_number % second_number;
	
   	printf("Division       : %f\n",division);
	printf("Remainder      : %d\n",remainder);
   }
   else
   {
   	printf("for Division and Remainder enter non zero second number\n");
   }

   return 0;
}
