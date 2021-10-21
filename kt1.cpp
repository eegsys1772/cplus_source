#include <iostream>
#include <fstream>
using namespace std;
void sapxep(string &s){
	for(int i=0;i<s.length()-1;i++){
		for(int j=i+1;j<s.length();j++){
			char a=s[i];
			s[i]=s[j];
			s[j]=a;
		}
	}
}
int main(){
	string a;
	ifstream f1;
	ofstream f2;
	f1.open("tam.txt");
	f2.open("tamluu.txt");
	f1>>a;
	sapxep(a);
	for(char i='0';i<='z';i++){
		if(i>=58&&i<=64||i>=91&&i<=96) continue;
		int dem=0;
		for(int j=0;j<a.length();j++){
	      	if(a[j]==i) dem++;
		}
	if(dem>0) f2<<i<<":"<<dem<<endl;
	}
	f1.close();
	f2.close();
	return 0;
}
