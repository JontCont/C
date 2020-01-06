#include <stdio.h>
#include <stdlib.h>

void print_show(void)
{
    printf("==========================\n");
    printf("==   View simple loop   ==\n");
    printf("==========================\n");
}

int main()
{
    int i ,j,k;
    print_show();
    printf("-------------------\n");
    printf("type  --   I  J  K\n");
    printf("-------------------\n");
    for( i =0;i <2;++i)
        printf("Outer%7d\n",i);
        for( j =0; j <3;++j)
            printf("    Inner%3d%3d\n",i,j);
        for( k=0 ; k <4 ; ++k)
            printf("       Inner%3d%3d\n",j,k);

}