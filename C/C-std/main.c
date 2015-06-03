#include	<stdlib.h>
#include	<stdio.h>

int	main()
{
  int	c;

  c = 99;

  while (c > 0)
    {
      printf("%d bottles of beer on the wall, %d bottles of beer.\n", c, c);
      c--;
      if (c != 0)
	printf("Take one down and pass it around, %d bottles of beer on the wall.\n", c);
      else
	printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
    }
  printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
  return (0);

}
