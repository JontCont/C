#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20]="";
    char str2[20]="";
    strcpy(str,"a1,b1,c1,d1");    
    int i ,k=97,k2=65,j=49;
    for(i=0;i<sizeof(str);i++)
    { 
        if(str[i]==44) str[i]=32;
        str2[i]=str[i];
        if(str[i]==k)
        {
            str2[i]=k2;
            k++;k2++;
        }
        else if(strcmp(&str2[i],"1")==0)
            str2[i]=j++;
        
    }
    printf("%s",str2);

    return 0;
}