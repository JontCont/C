
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#include<cmath>
#include<map>
#include<string>
#define inf 1<<30
#define eps 1e-7
#define LD long double
#define LL long long
#define maxn 1000000005
using namespace std;
struct Node{
	int maze[3][3];   //¤K??¨ãÊ^±¡úG 
	int h,g;    //‰ÎŸÄ¦ôÉ²¨ç?
	int x,y;   //ªÅ¦ìªº¦ì¸m
	int Hash;   //HASH­È
	bool operator<(const Node n1)const{     //É¬¥ı?¦C²Ä¤@??¦r?h,²Ä¤G??¦r?g
		return h!=n1.h?h>n1.h:g>n1.g;
	}
	bool check(){    //§P?¬O§_¦Xªk
		if(x>=0&&x<3&&y>=0&&y<3)
			return true;
		return false;
	}
}s,u,v,tt;
int HASH[9]={1,1,2,6,24,120,720,5040,40320};   //HASHªº?­È
int destination=322560;   //¥Ø?±¡úGªºHASH­È 
/*
¥Ø???¡G
1 2 3
4 5 6 
7 8 0
¨ähash­È?322560
*/
int vis[400000];            //§P???¤w¹M?¡Aªì©l?-1¡A§_??¨ì}?¨Bªº?¦V
int pre[400000];        //¸ô?«O¦s
int way[4][2]={{0,1},{0,-1},{1,0},{-1,0}};   //¥|ŸÄ¤è¦V
void debug(Node tmp){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%d ",tmp.maze[i][j]);
		printf("\n");
	}
	printf("%d %d\n%d %d\n",tmp.x,tmp.y,tmp.g,tmp.h);
	printf("hash=%d\n",tmp.Hash);
}
int get_hash(Node tmp){    //?±oHASH­È
	int a[9],k=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			a[k++]=tmp.maze[i][j];
	int res=0;
	for(int i=0;i<9;i++){
		int k=0;
		for(int j=0;j<i;j++)
			if(a[j]>a[i])
				k++;
		res+=HASH[i]*k;
	}
	return res;
}
 
bool isok(Node tmp){    //¨D¥X°f§Ç?¡A§P?¬O§_¦³¸Ñ
	int a[9],k=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			a[k++]=tmp.maze[i][j];
	int sum=0;
	for(int i=0;i<9;i++)
		for(int j=i+1;j<9;j++)
			if(a[j]&&a[i]&&a[i]>a[j])
				sum++;
	return !(sum&1);    //¥Ñ¤_¥Ø?¸Ñ?°¸?¡A©Ò¥H??ªº°f§Ç??°¸?¤~¥i¦æ,¥æ?ªÅ®æ¡A°f§Ç?¼W´T?°¸?¡A¬Gªì©l?˜ò©M¥Ø?ªº?˜òªº°f§Ç?©_°¸©Ê¬Û¦P
}
 
int get_h(Node tmp){   //?±o¦ôÉ²¨ç?H
	int ans=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(tmp.maze[i][j])
				ans+=abs(i-(tmp.maze[i][j]-1)/3)+abs(j-(tmp.maze[i][j]-1)%3);
	return ans;
}
void astar(){    //·j¯Á
	priority_queue<Node>que;
	que.push(s);
	while(!que.empty()){
		u=que.top();
		que.pop();
		for(int i=0;i<4;i++){
			v=u;
			v.x+=way[i][0];
			v.y+=way[i][1];
			if(v.check()){
				swap(v.maze[v.x][v.y],v.maze[u.x][u.y]);   //?ªÅ¦ì©M¬Û•Ø¦ì¥æ?
				v.Hash=get_hash(v);			    //±o¨ìHASH­È
				if(vis[v.Hash]==-1&&isok(v)){   //§P?¬O§_¤w¹M?¥B¬O§_¥i¦æ¡A¦ZÍ¥i¥H¤£­n
					vis[v.Hash]=i;           //«O¦s¤è¦V
					v.g++;;                  //¤wªá¥NÉ²+1
					pre[v.Hash]=u.Hash;     //«O¦s¸ô?
					v.h=get_h(v);           //±o¨ì·sªº¦ôÉ²¨ç?H
					que.push(v);     //¤J?
				}
				if(v.Hash==destination)
					return ;
			}
		}
	}
}
void print(){
	string ans;
	ans.clear();
	int nxt=destination;
	while(pre[nxt]!=-1){  //ŸÏ?˜ò©¹ş˜ò§ä¸ô?
		switch(vis[nxt]){   //¥|ŸÄ¤è¦V??
		case 0:ans+='r';break;
		case 1:ans+='l';break;
		case 2:ans+='d';break;
		case 3:ans+='u';break;
		}
		nxt=pre[nxt];	
	}
	for(int i=ans.size()-1;i>=0;i--)
		putchar(ans[i]);
	puts("");
}
int main(){
	Node test;
	/*int value = 0;
	for( int i = 0; i < 3; i++ )
	{
		for( int j = 0; j < 3; j++ )
		{
			test.maze[i][j] = value++;
		}
	}*/
 
	//cout << get_hash(test) << endl;
	
	char str[100];
	while(gets(str)!=NULL){
		int k=0;
		memset(vis,-1,sizeof(vis));
		memset(pre,-1,sizeof(pre));
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++){
				if((str[k]<='9'&&str[k]>='0')||str[k]=='x'){
					if(str[k]=='x'){
						s.maze[i][j]=0;
						s.x=i;
						s.y=j;
					}
					else
						s.maze[i][j]=str[k]-'0';
				}
				else
					j--;
				k++;
			}
			if(!isok(s)){   //ş©l??¤£¥i¦æ
				printf("unsolvable\n");
				continue;
			}
			s.Hash=get_hash(s);
			if(s.Hash==destination){   //ş©l???¥Ø???
				puts("");
				continue;
			}
			vis[s.Hash]=-2;
			s.g=0;s.h=get_h(s);
			astar();
			print();
	}
	return 0;
}
 
/*
™]¤J®æ¦¡¡G
1234567x8ªí¥Ü¡Gx¥NªíªÅ®æ¡A0ªí¥ÜªÅ®æ
1 2 3
4 5 6
7 0 8
??¡G
1 2 3
4 5 6
7 8 0
*/
