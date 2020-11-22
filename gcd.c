
#include <stdio.h>
#include <stdio.h>
// compute greatest common divisor
int GCD(int n1, int n2);

int main()
{
    int n1 = 0;
    int n2 = 0;
    int GCD = 0;
    int m = 0;
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
	
	for(m=1; m <= n1 && m <= n2; m++)
     {  if(n1%m==0 & n2%m==0) {
         GCD = m;
       }
     }

    printf("GCD = %d", GCD);

    return 0;
}
