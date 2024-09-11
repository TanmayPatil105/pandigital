#include <stdio.h>
#include <stdlib.h>

#define N 9

void
__populate_nines(char **__nines,
                 int    n)
{
  __nines[0] = "9";

  for (int i = 1; i < n; i++)
    {
      /* 1 + i + 1 + '\0' */
      char *__nine = (char *) malloc (sizeof (char) * (3 + i));

      __nine[0] = i + '0';

      for (int j = 1; j <= i; j++)
        {
          __nine[j] = '8';
        }

      __nine[i + 1] = '9';
      __nine[i + 2] = '\0';

      __nines[i] = __nine;
    }	
}

int
main(int   argc,
     char *argv)
{
  char **__nines = NULL;
  int pan = 1;

  for (int i = 2; i <= N; i++)
    {
      int start = pan * 10 + i;
      pan = start;
    }

  __nines = (char **) (malloc (sizeof (char*) * (N - 1)));
  __populate_nines (__nines, N);

  for (int i = 0; i < N - 1; i++)
    {
      pan += atoi (__nines[i]);
    }

  printf ("%d\n", pan);
}
