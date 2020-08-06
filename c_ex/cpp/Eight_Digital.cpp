#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#define SIZE 16

#define ValueFunction 2
#if ValueFunction == 2
#define DIFF(A, B) ((A) > (B) ? (A) - (B) : (B) - (A))
#endif

int main(void)
{
  Item target = {{{1, 2, 3}, {8, 0, 4}, {7, 6, 5}}, 0, 0, NULL};
  Item state = {{{2, 3, 4}, {1, 6, 8}, {0, 7, 5}}, 0, 0, NULL};
  bool first;
  char minimalPath;
  int i, minimalSteps, currentMethodNumber;
  int steps[SIZE];

  FILE *fp;
  char *filename = "output.txt";
  if ((fp = fopen(filename, "w")) == NULL)
  {
    printf("Can't create output file \"%s\"!\n", filename);
    exit(EXIT_FAILURE);
  }

  puts("Look at an example first: \n");
  fputs("Look at an example first: \n\n", fp);
  puts("target state: ");
  fputs("target state: \n", fp);
  showItem(&target, fp);
  puts("Initial state: ");
  fputs("Initial state: \n", fp);
  showItem(&state, fp);

  first = false;
  minimalSteps = -1;
  for (i = 0; i < SIZE; i++)
  {
    steps[i] = AstarCalculateSteps(state, target);
    if ((steps[i] >= 0) && (first == false))
    {
      minimalSteps = steps[i];
      minimalPath = i;
      first = true;
    }
    if ((first == true) && (steps[i] >= 0) && (steps[i] < minimalSteps))
    {
      minimalSteps = steps[i];
      minimalPath = i;
    }
  }
  if (minimalSteps >= 0)
  {
    printf("The minimal steps are: \t%d steps\n\n", minimalSteps);
    fprintf(fp, "The minimal steps are: \t%d steps\n\n", minimalSteps);

    puts("A* algorithm:\n");
    fputs("A* algorithm:\n\n", fp);

    currentMethodNumber = 1;
    for (i = 0; i < SIZE; i++)
      if (steps[i] == minimalSteps)
        currentMethodNumber = AstarFindAllSolutions(state, target, currentMethodNumber, fp);
  }
  system("pause");
  return 0;
}
