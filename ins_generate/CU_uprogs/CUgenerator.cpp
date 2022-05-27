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
	mp["PC+1->PC"]="3f*,00*,";
	mp["PC->MAR"]="3c*,00*,";
	mp["RAM->MDR"]="0a*,20*,";
	mp["MDR->IR"]="88*,00*,";
	mp["JP"]="02*,01*,";
	mp["QJP"]="02*,02*,";
	mp["MDR->Ri"]="80*,00*,";
	mp["MDR->MAR"]="8c*,00*,";
	mp["Ri->MDR"]="1a*,00*,";
	mp["HALT"]="02*,08*,";
	mp["XJP+PC->PC"]="fe*,00*,";
	mp["Ri+Rj->Rj"]="50*,40*,";
	mp["MDR+PC->PC"]="be*,00*,";
	mp["Ri+1->Ri"]="11*,00*,";
	mp["MDR->RAM"]="82*,10*,";
	mp["Ri+1->Ri+"]="11*,40*,";
	mp["."]="---,---";
	freopen("CU.txt","r",stdin);
	freopen("CU.csv","w",stdout);
	printf("ROM_ADDR,");
	printf("MI,LO\n");
	while(cin>>st){printf("%x,",s++);
		cout<<mp[st]<<endl;}
	
	return 0;
}
