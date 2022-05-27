#include<string>
#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>
using namespace std;
map<string,int> mp;
string stt;
int s;
int main(){
	freopen("INS.txt","r",stdin);
	freopen("INS.csv","w",stdout);
	printf("RAM_ADDR,DAT\n");
	mp["LD"]=1; 
	mp["ST"]=2;
	mp["HALT"]=3;
	mp["JX"]=4;
	mp["ADD"]=5;
	mp["JMP"]=6;
	mp["INC"]=7;
	mp["INC+"]=10;
	mp["DATA_BU"]=11;
	mp["DATA_O"]=12;
	mp["C"]=0;
	mp["V"]=1;
	mp["N"]=2;
	mp["Z"]=3;
	int flag=0;
	while(cin>>stt){
		char st[50];
		int r,r1,r2,ad;
		printf("%x,",s++);
		printf("*%x",mp[stt]);
		switch(mp[stt]){
			case 1:
				cin>>st;
				sscanf(st,"R%d,%d",&r,&ad);
				printf("%x\n%x,",r,s++);
				printf("*%x%x\n",ad>>4,ad%16);
				break;
			case 2:
				cin>>st;
				sscanf(st,"R%d,%d",&r,&ad);
				printf("%x\n%x,",r,s++);
				printf("*%x%x\n",ad>>4,ad%16);
				break;
			case 3:puts("0");break;
			case 4:
				cin>>stt;
				cin>>ad;
				if(ad<0)ad+=256;
				printf("%x\n%x,",mp[stt]<<2,s++);
				printf("*%x%x\n",ad>>4,ad%16);
				break;
			case 5:
				cin>>st;
				sscanf(st,"R%d,R%d",&r1,&r2);
				printf("%x\n",(r1<<2)+r2);
				break;
			case 6:
				cin>>ad;
				if(ad<0)ad+=256;
				printf("0\n%x,",s++);
				printf("*%x%x\n",ad>>4,ad%16);
				break;
			case 7:
				cin>>st;
				sscanf(st,"R%d",&r);
				printf("%x\n",r);
				break;
			case 12:flag=2;break;
			case 11:flag=1;break;
			case 10:
				cin>>st;
				sscanf(st,"R%d",&r);
				printf("%x\n",r);
				break;
				
		}
		if(flag){printf("0\n");break;}
	}
	int dat;
	while(cin>>dat){
		printf("%x,",s++);
		if(flag==1){
		if(dat>127||dat<-128){printf("OVERFLOW!\n");continue;}
		if(dat<0)dat+=256;}
		printf("*%x%x\n",dat>>4,dat%16);
	}
	return 0;
}



			
	
