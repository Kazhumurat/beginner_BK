#include<stdio.h> 

/* Function to calculate x raised to the power y */
int power(int a, int n) 
{
	// write a function to calculate power
  if (n != 0)
      return (a * power(a, n - 1));
  else
      return 1;
} 

/* Program to test function power */
int main() 
{ 
	int a = 2; 
	int n = 3; 

	printf("%d", power(a, n)); 
	return 0; 
} 
