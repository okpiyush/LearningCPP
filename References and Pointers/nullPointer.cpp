#include <stdio.h>
int main()
{
  int *ptr;
  int i = 50;
  printf("value of i=%d\n", i);
  // The below line will print a garbage value as ptr is not pointing to any valid address.
//	printf("Value of variable pointed by ptr=%d\n", *ptr);
  return 0;
}