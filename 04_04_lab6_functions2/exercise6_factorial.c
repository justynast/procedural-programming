#include <stdio.h>
#include <stdlib.h>

/* Program that calculates factorial of given number */

long int factorial(int n)
{
    if(n==0) /* factorial of 0 is 1 */
    {
        return 1;
    }

    else
    {
        int i;
        int f=1;

        for(i=1; i<=n; i++)
        {
            f *= i;
        }

        return f;
    }
}


int main()
{
      int a, b;
      printf("Please input a non negative number: ");
      scanf("%i",&a);

      while(a<0) /* making sure that number is not negative */
      {
          printf("That is a negative number!\n");
          printf("Please input a non negative number: ");
          scanf("%i",&a);
      }

      b = factorial(a);

      printf("Factorial of the number is %i", b);

    return 0;
}
