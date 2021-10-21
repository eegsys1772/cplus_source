#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

 int main(){
 	FILE * f=fopen("dslkda.txt","r");
while(!feof(f)){
		char kh[50];
 		fgets(kh,100,f);
 		kh[strlen(kh)-1]='\0';
 		char dch[50];
 		fgets(dch,100,f);
 		dch[strlen(dch)-1]='\0';
 		
 		DS *p=new DS;
 		strcpy(p->td.khoa,kh);
 		strcpy(p->td.diachi,dch);
 		printf("%s",kh);
 		printf("%s\n",dch);
 		printf("danh sach sinh vien cua khoa: %s\n",kh);
while(1){
 			char msv[50];
	 		fgets(msv,100,f);
	 		msv[strlen(msv)-1]='\0';
	 		if(strlen(msv)==0||feof(f))break;
	 		char t[50];
	 		fgets(t,100,f);
	 		t[strlen(t)-1]='\0';
	 		char d[50];
	 		fgets(d,100,f);
	 		d[strlen(d)-1]='\0';
	 		strcpy(p->td.truong.masv,msv);
	 		strcpy(p->td.truong.ten,t);
	 		p->td.truong.diem=x;
	 		printf("%s %s %s\n",msv,t,d);
		  }
	}
	fclose(f);
 	return first;
}
