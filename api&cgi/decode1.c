#include "mycgi.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
nv_set nv[200];
int main()
{
  int	i,count;
  count=get_input(nv);
  printf("Content-type:text/html;Charset=big5\r\n");
  printf("\r\n");

  printf("<html><head></head><body>\n");
  printf("<h3>Login resuit:</h3>\n\n");
  
  if(strcmp(nv[0].value,"student")==0 && strcmp(nv[1].value,"abcd ")==0)
		printf("<p>sucess \n");
  else  printf("<p>error \n");
   //printf("<p>value =%s \n",nv[1].value);
  printf("</body></html>\n");
  return 0;
}


