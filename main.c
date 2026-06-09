#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  srand(time(NULL));
  printf("You've rolled a %d.\n", rand() % 7);
}
