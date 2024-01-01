#include<iostream>
#include<string.h>
#include <typeinfo>

using namespace std;

int main(){
	
char sifre[]={"kamyoncu"};
int sifre2[8];
char cvb[]={"abcdefghijklmnoprstuvyz"};
int cvb3[23];
int cvb2[8];
int cvb4[8];
//cvb[1]=static_cast<int>(sifre[1]);

for(int i=0;i<8;i++){
	sifre2[i]=static_cast<int>(sifre[i]);
}

for(int i=0;i<23;i++){
	cvb3[i]=static_cast<int>(cvb[i]);
}

for(int i=0;i<8;i++){
	for(int j=0;j<23;j++){
		if(sifre2[i]==cvb3[j]){
			cvb2[i]=cvb3[j];
		}
	}
}
for(int i=0;i<8;i++){
	cvb4[i]=static_cast<char>(cvb2[i]);
	
}

for(int i=0;i<8;i++){
	cout<<static_cast<char>(cvb4[i]);
}
	return 0;
}
