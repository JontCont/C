#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
/*
search character
*/
int main(void)
{
  int status ; 
  pid_t child; 
  char *arg[2],cmd[20];

  printf("input command : ");
  scanf("%s",&cmd);

  while (strcmp(cmd,"done") != 0)
  {
  child = fork();

  if (child == 0 )
  {
    arg[0]=cmd; arg[1]=NULL;
    execvp(cmd,arg);
    printf("child process \n");
    exit(0);
  }
   else
    {
      waitpid(child,&status,0);
      printf("input command : ");
      scanf("%s",&cmd);
    } 
  }//while();
  exit(0);
}//main