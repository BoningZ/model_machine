#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string st,s;
int main(){
	freopen("CU.txt","r",stdin);
	freopen("CU.csv","w",stdout);
	printf("ROM_ADDR,");
	for(int i=23;i>=0;i--)printf("uIR%d,",i);
	printf("HI,MI,LO\n");
	while(cin>>st){
		printf("%d,",s++);
		if(st.find("->")!=string::npos){
			if(st.find("+")!=string::npos){//a->b
				string a,b;
				sscanf(st,"%s->%s",a,b);
				
				
			}else{//a+b->c
			
			}
		}else{//a
			
		}
		puts("");
	}
