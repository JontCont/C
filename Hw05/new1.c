#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>

int main(void)
{  
	char *args[]={"ls",NULL};
	execvp("ls",args[0],args[1]);
	printf("the end program\n");
}
