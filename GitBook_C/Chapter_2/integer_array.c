#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i[5];

    for(int k=0;k<5;k++)
    {
        i[k] =k;
        printf("content => %d\n",i[k]);
        printf("ram => %p\n",&i[k]);
    }
    system("PAUSE");
    return 0;
}
