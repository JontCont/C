#include <stdio.h>

int main()
{
    int i,j,temp;
    int num[3];
    printf("enter number(Side length):");
    scanf("%d %d %d",&num[1],&num[2],&num[3]);

    int a =num[1];int b =num[2];int c =num[3];
    if(a>b){temp=a; a=b;b=temp;}
    if(b>c){temp=b; b=c;c=temp;}
    if(a>b){temp=a; a=b;b=temp;}

    printf("%d %d %d\n",a,b,c);
    if(a+b <=c)
        printf("NO");
    else if(a*a+b*b<c*c)
        printf("Obtuse");
    else if(a*a+b*b==c*c)
        printf("Right");
    else 
        printf("Acute");
    return 0;
}