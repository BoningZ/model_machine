#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<map>
using namespace std;
int main(){
	freopen("every.txt","r",stdin);
	freopen("every.cpp","w",stdout);
	string st;
	while(cin>>st){
		int tmp=0,cnt=0;
		cout<<"mp[\""<<st<<"\"]=\"";
		for(int i=0;i<16;i++){
			int bit;
			cin>>bit;
			cnt++;
			tmp=(tmp<<1|bit);
			if(cnt%4==0){printf("%x",tmp);tmp=0;}
			if(cnt%8==0)printf("*,");
		}
		printf("\";\n");
	}
	return 0;
}
			 
