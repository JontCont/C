#include <stdlib.h>
#include <stdio.h>
#include "Calculator.h" //add

int main()
{
    int varA,varB;
    char option;
    printf("Eneter Value , option , Value :");
    scanf("%d %c %d",&varA,&option,&varB);
    
    switch(option)
    {
        case '+': 
            printf("sum : %d",Add(varA,varB));
        break;

        // case '-': 
        //     printf("sum : %d",Sub(varA,varB));
        // break;

        // case '*': 
        //     printf("sum : %d",Mul(varA,varB));
        // break;

        // case '/': 
        //     printf("sum : %d",Div(varA,varB));
        // break;

        default : printf("No this option !!");break;

    }

    return 0;
}