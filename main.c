#include <stdio.h>
#include <stdlib.h>

#define N 4

void
__populate_nines(int *__nines,
                 int  n)
{
  __nines[0] = 9;

  for (int i = 1; i < n; i++)
    {
      int __nine = i;

      for (int j = 1; j <= i; j++)
        {
          __nine = __nine * 10 + 8;
        }

      __nine = __nine * 10 + 9;

      __nines[i] = __nine;
    }
}

int
main(int   argc,
     char *argv)
{
  int *__nines = NULL;
  int pan = 1;

  for (int i = 2; i <= N; i++)
    {
      int start = pan * 10 + i;
      pan = start;
    }

  __nines = (int *) (malloc (sizeof (int) * (N - 1)));
  __populate_nines (__nines, N);

  for (int i = 0; i < N - 1; i++)
    {
      pan += __nines[i];
    }

  printf ("%d\n", pan);
}
