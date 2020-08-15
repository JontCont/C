#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20]="";
    char str2[20]="";
    strcpy(str,"a1,b1,c1,d1");    
    int i ;
    for(i=0;i<sizeof(str);i++)
    { 
        if(str[i]==44){str[i]=32;};
            str2[i]=str[i];
    }
    printf("%s",str2);
}