#include <iostream>
#include <cstdlib>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j;
    char k=65;
    for(i =0 ;i<=5;i++)
    {
     for(j=1;j<=5-i;j++)
            cout <<' ';
        for(j=1;j<=i;j++)
        {
            cout << k <<" ";
            k++;
        }
        cout <<'\n';
    } 
    k = 65;
    for(i =0 ;i<=5;i++)
    {
     for(j=1;j<=5-i;j++)
            cout <<' ';
        for(j=1;j<=i;j++)
        {
            cout << k ;
            k++;
        }
        cout <<'\n';
    } 
    
}