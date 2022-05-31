#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<map>
using namespace std;
int bits[16];
int main(){
	freopen("every.txt","r",stdin);
	freopen("every.cpp","w",stdout);
	string st;
	while(cin>>st){
		int tmp=0,cnt=0;
		cout<<"mp[\""<<st<<"\"]=\"";
		for(int i=0;i<16;i++){
			int bit;
			cin>>bit; bits[i]=bit;
			cnt++;
			tmp=(tmp<<1|bit);
			if(cnt%4==0){printf("%X",tmp);tmp=0;}
			if(cnt%8==0)printf(",");
		}
		printf("%d%d,%d%d,%d%d%d,%d,%d,%d,%d%d,%d,%d%d%d,",bits[0],bits[1],bits[2],bits[3],bits[4],bits[5],bits[6],bits[7],bits[8],bits[9],bits[10],bits[11],bits[12],bits[13],bits[14],bits[15]);
		
		printf("\";\n");
	}
	return 0;
}
			 
