#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


void transopose1(int d[][3],int m)
{
	int i,j;
	cout << "after => 3*2 array :\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<m;j++)
			cout <<d[j][i];
		cout<<"\n";
	}
}

void transopose2(int *d,int m,int n)
{
	int i,j;
	cout << "(&)after => 3*2 array :\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<m;j++)
			cout <<*(d+j*n+i);
		cout<<"\n";
	}
}

int main(int argc, char** argv) {
	int num[2][3],i,j;
	cout<<"enter 2*3 array :\n";
	
	for(i = 0;i<2 ;i++)
		for(j=0 ; j <3 ; j++)
		{
			cout<< "NO. '"<<i <<"' row, NO '"<<j <<"' col >";
			cin >> num[i][j];
		}
	cout <<"origin 2*3 array :\n";
	
	for(i = 0 ;i<2;i++)
	{
		for(j=0 ; j<3;j++)
			cout <<num[i][j];
		cout<<'\n';
	}	
	
	transopose1(num,2);
	cout<<"\n";
	transopose2(&num[0][0],2,3);
	
	system("PAUSE");
	return 0;
}
