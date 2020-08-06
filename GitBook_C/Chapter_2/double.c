#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double i[3];

    for(int k=0;k<3 ;k++){
        printf("content =%f\n",i[k]);
        printf("memory =%p\n",i[k]);
    }
    system("PAUSE");
    return 0;
}
