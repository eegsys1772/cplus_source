#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
struct toado{
 string tentp;
 int x;
 int y;
 };
 struct DS{
 	toado td;
 	DS *next;
 } *first,*last,*tam;
 DS *FIFO(){
 	
 FILE * f=fopen("toado.txt","r");
 int x,y;
 first=NULL;
 while(!feof(f)){
 	char tp[50];
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
  	fscanf(f,"%d\n",&x);
 	fscanf(f,"%d\n",&y);
 	cout<<tp<<"("<<x<<","<<y<<")"<<endl;
 	DS *p=new DS;
 	p->td.x=x;
 	p->td.y=y;
 	p->td.tentp=tp;
 	p->next=NULL;
 	if(first==NULL) first==p;
 	else
 		last->next=p;
 	last=p;
 }
 
	 fclose(f);
	 return first;
	}
void Xuat(DS *first){
 	for(DS *p=first;p!=NULL;p=p->next){
 			cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	 }
 }
int main{
	first=FIFO();
	Xuat(first);
	DS *p=first;
	cout<<"tp dau: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
   	p=last;
   	cout<<"tp cuoi: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	
		/*cout<<"\n TEN THANH PHO DAU: "<<endl; 
		cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
		cout<<"\n TEN THANH PHO CUOI: "<<endl;
		cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;*/
}
 // IN RA TEN THANH PHO GAN CUOI
 
