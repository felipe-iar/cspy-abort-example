#include <stdio.h>
#if !defined (NDEBUG)
# include <stdlib.h>
#endif

unsigned int x = 0;

int main()
{
  for (; x < 10; x++)
  {
    printf("Hello, World %u\n", x);
  }
  while(1);
}

#if !defined(NDEBUG)
__root void _softwareAbort()
{
  abort();
}
#endif
