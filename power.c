#include<stdio.h> 
  
/* Function to calculate x raised to the power y */
int power(int a,  unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    else if (n%2 == 0) 
        return power(a, n/2)*power(a, n/2); 
    else
        return a*power(a, n/2)*power(a, n/2); 
} 
  
/* Program to test function power */
int main() 
{ 
    int a = 2; 
    unsigned int n = 3; 
  
    printf("%d", power(a, n)); 
    return 0; 
}
