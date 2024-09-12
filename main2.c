#include <stdio.h>
#include <stdlib.h>

#define N 9

int
main (int argc, char *argv[])
{
  char pan[10] = { '\0'};

  for (int i = N; i >= 1; i--)
    {
      pan[N-i] = i + '0';
    }

  printf ("%d\n", atoi (pan));
}
