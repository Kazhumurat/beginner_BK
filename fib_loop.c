  // Fibonacci Series using Space Optimized Method 
#include<stdio.h> 
int fib(int n)   // int is a type returned by function fib which expects integer //input n
{

	// write a for-loop version of fibonacci function
	int a = 0, b = 1, c, i;
	 for(i=2; i<=n; i++)
	  {
	      c=a+b;
	      a=b;
	      b=c;
	  }
 return c;
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
