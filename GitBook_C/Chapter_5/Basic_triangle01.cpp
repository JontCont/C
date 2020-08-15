#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void trangle_01(int num)
{
    int i=0,j=0;
	for(i=1;i<=num;i++,cout<<endl)
    {
	    for(j=1;j<=(num-i);j++)
    		cout<<" ";
    	for(j=1;j<=(2*i-1);j++)
	    	cout<<"*";
	}
}
void trangle_02(int num)
{

	int i=0,j=0;
	for(i=1;i<=num;i++,cout<<endl)
    {
		for(j=1;j<=(i-1);j++)
			cout<<" ";
		for(j=1;j<=(9-2*(i-1));j++)
			cout<<"*";
	}
}
void trangle_03()
{
	int i,j;
	int a[10][21];
	for(i=0;i<10;i++){
		for(j=0;j<21;j++)
			a[i][j]=0;
	}
	a[0][10]=1;

    for(i=1;i<10;i++){
    	for(j=(10-i);j<=(10+i);j=j+2)
	    	a[i][j]=a[i-1][j-1]+a[i-1][j+1];
    } 

    for(i=0;i<10;i++,cout<<endl)
	{
    	cout<<"\t"; 
	    for(j=0;j<21;j++)
		{
	    	if(a[i][j]==0)
	     		cout<<"  "; 
	    	else
	    		cout<<a[i][j];
	    }
    }
    cout<<endl;
}

int main()
{
    int num;
    printf("example triangle....01 \n");
    printf("enter number (ex :1 3 5 ...) :");
    scanf("%d",&num);
    trangle_01(num);
    printf("---------------------- \n");
    printf("example triangle....02 \n\n");
    printf("enter number :");
    scanf("%d",&num);
    trangle_02(num);
	printf("example triangle....03 \n\n");
	trangle_03();
	return 0;
} 