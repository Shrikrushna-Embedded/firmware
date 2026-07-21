#include <stdio.h>

int main(void)
{
   char name[50];
   int age;
   float height;

   printf("Welcome to ESM!!\n");

   printf("Enter your name: ");
   scanf("%s", name);

   printf("Enter your age: ");
   scanf("%d",&age);

   printf("Enter your height in feet: ");
   scanf("%f",&height);

   printf("\n----- User Information -----\n");
   printf("Name   : %s\n",name);
   printf("Age    : %d\n",age);
   printf("Height : %0.2f feet\n",height);

   return 0;
}
