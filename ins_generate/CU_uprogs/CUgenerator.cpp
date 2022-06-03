#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<map>
using namespace std;
string st;
int s;
map<string,string> mp;
int main(){
	mp["PC+1->PC"]="3F,00,00,11,111,1,0,0,00,0,000,";
	mp["PC->MAR"]="3C,00,00,11,110,0,0,0,00,0,000,";
	mp["RAM->MDR"]="0A,20,00,00,101,0,0,0,10,0,000,";
	mp["MDR->IR"]="88,00,10,00,100,0,0,0,00,0,000,";
	mp["QJP"]="02,01,00,00,001,0,0,0,00,0,001,";
	mp["JP"]="02,02,00,00,001,0,0,0,00,0,010,";
	mp["MDR->Ri"]="80,00,10,00,000,0,0,0,00,0,000,";
	mp["MDR->MAR"]="8C,00,10,00,110,0,0,0,00,0,000,";
	mp["Ri->MDR"]="1A,00,00,01,101,0,0,0,00,0,000,";
	mp["HALT"]="02,08,00,00,001,0,0,0,00,1,000,";
	mp["XJP+PC->PC"]="FE,00,11,11,111,0,0,0,00,0,000,";
	mp["Ri+Rj->Rj"]="50,40,01,01,000,0,0,1,00,0,000,";
	mp["MDR+PC->PC"]="BE,00,10,11,111,0,0,0,00,0,000,";
	mp["Ri+1->Ri"]="11,00,00,01,000,1,0,0,00,0,000,";
	mp["MDR->RAM"]="82,10,10,00,001,0,0,0,01,0,000,";
	mp["Ri+1->Ri+"]="11,40,00,01,000,1,0,1,00,0,000,";

	mp["."]="---,---";
	freopen("CU.txt","r",stdin);
	freopen("CU.csv","w",stdout);
	printf("ROM_ADDR,INS");
	printf("MI,LO\n");
	while(cin>>st){printf("%2X,",s++);
		cout<<st<<","<<mp[st]<<endl;}
	
	return 0;
}
