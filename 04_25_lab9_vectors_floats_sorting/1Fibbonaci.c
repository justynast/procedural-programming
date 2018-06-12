#include <stdio.h>
#include <stdlib.h>

void printVector(int* a, int n)
{
      int i;
      for (i = 0; i < n; i++)
      {
            printf("%2i:  %3i\n",i, a[i]);
      }
}

int main()
{
    int fib[21];
    fib[0] = 0;
    fib[1] = 1;

    int i;
    for(i=2; i<21; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printVector(fib,21);
    return 0;
}
