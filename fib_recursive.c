// Fibonacci Series using Space Optimized Method 
#include<stdio.h> 
int fib(int n)
{
  // write a recursive version of fibonacci function
     if (n <= 1) 
      return n; 
   return fib(n-1) + fib(n-2); 
}
  
int main () 
{ 
  int n; 
  printf("computing Fibonacci sequence\n");
  printf("Enter n:");
  scanf("%d",&n);
  int result;
  result = fib(n);
  printf("The n-th Fibonacci number is %i", result); 
  getchar();
  return 0; 
}
