#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[2],t;
    for(int i=0;i<2;i++)
        scanf("%d",&a[i]);
    t= a[0]>a[1];

    if(t==1)
        goto true;
    printf("a[0] is lower than a[1]");
    goto done;

    true:
        printf("a[0] is higher than a[1]");
    done:
        goto_ex02();
}

void goto_ex02(){
    printf("the begin\n");
	goto end;
	printf("hello world\n");

end:
	printf("the end\n");
}
