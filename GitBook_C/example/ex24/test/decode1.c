/*web 01*/

#include "mycgi.h"
#include <stdio.h>

nv_set nv[200];

int main()
{
  int	i,count;   
  count=get_input(nv);
  //char type1[5]=name1,type2[5]=123456;
  
  printf("Content-type:text/html;Charset=big5\r\n");
  printf("\r\n");
  printf("<html><head></head><body>\n");
  printf("<h3>List:</h3>\n\n");
  
	//if(strcmp(nv[0].name,type1)==0 && strcmp(nv[1].name,type2))
	//{printf("welcome");}
	//else prinf("error");
	
  for (i=0;i<count;i++) 
  {
    printf("<p>name=%s ",nv[i].name);
    printf("value=%s\n",nv[i].value);
  }
  
  printf("</body></html>\n");
  return 0;
}


