#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int min = 1, max = 7;
  int use_time = 0;

  for (int i = 0; i < argc; i++) {
    if (argv[i][0] == '-' && argv[i][1] == 't') {
      use_time = 1;
    } else if (min == 1) {
      min = atoi(argv[i]);
    } else {
      max = atoi(argv[i]);
      break;
    }
  }

  int roll;

  if (use_time) {
    srand(time(NULL));
    roll = rand() % (max - min + 1) + min;
  } else {
    unsigned int random_value;
    FILE* urandom = fopen("/dev/urandom", "r");

    if (urandom == NULL) {
      perror("fopen");
      return 1;
    }

    fread(&random_value, sizeof(unsigned int), 1, urandom);
    fclose(urandom);

    roll = random_value % (max - min + 1) + min;
  }

  printf("You've rolled a %d.\n", roll);
  return 0;
}
