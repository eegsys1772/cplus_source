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
 } *first,*last,*tam,*F;
 
DS *FIFO(){// first in first out
 	FILE * f=fopen("toado.txt","r");
 int x,y;
 first=NULL;
 while(!feof(f)){
 	char tp[50];
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
  	fscanf(f,"%d\n",&x);
 	fscanf(f,"%d\n",&y);
 	DS *p=new DS;
 	p->td.x=x;
 	p->td.y=y;
 	p->td.tentp=tp;
 	p->next=NULL;
 	if(first==NULL) first=p;
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
 
void sapxep(DS *first)
{	
	for(DS *p=first;p->next!=NULL;p=p->next)
		for(DS *q=p->next;q!=NULL;q=q->next)
			if(p->td.tentp>q->td.tentp)
			{
				toado temp = p->td;
				p->td=q->td;
				q->td=temp;
			}
}


 
int main()
{	
	
	first=FIFO();
	sapxep(first);	
	Xuat(first);
}
/*#include <iostream>
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
 DS *FIFO(){// first in first out
 	FILE * f=fopen("toado.txt","r");
 int x,y;
 first=NULL;
 while(!feof(f)){
 	char tp[50];
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
  	fscanf(f,"%d\n",&x);
 	fscanf(f,"%d\n",&y);
 	//cout<<tp<<"("<<x<<","<<y<<")"<<endl;// dong khi chay //2
 	DS *p=new DS;
 	p->td.x=x;
 	p->td.y=y;
 	p->td.tentp=tp;
 	p->next=NULL;
 	if(first==NULL) first=p;
 	else
 		last->next=p;
 	last=p;
 }
	 fclose(f);
	 return first;
 }
 //2
 void Xuat(DS *first){
 	for(DS *p=first;p!=NULL;p=p->next){
 			cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	 }
 }

void sapxep(DS *first)
{	
	for(DS *p=first;p!=NULL;p=p->next)
	{
		for(DS *q=p->next;q!=NULL;q=q->next)
		{
			if(p->td.tentp>q->td.tentp)
			{
				toado temp = p->td;
				p->td=q->td;
				q->td=temp;
			}
		}
	}
}



 
int main()
{	
	first=FIFO();
	Xuat(first);
	sapxep(first);
}
*/
/*int main()
{
  first=FIFO();
	Xuat(first);
//	DS *p=first;
 	Xuat(first);
	sapxep(first);
	cout<<"Danh sach sau khi sap xep:\n";
	Xuat(first);
	   	/*cout<<"tp dau: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	   	p=last;
	   	cout<<"tp cuoi: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;*/
	//p=first;
	//if(p==NULL|p->next==NULL)
	/*while(p->next !=last){
		p=p->next;
			cout<<"tp gan cuoi: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
		
	}*/
////In ra thanh pho thu i, i nhap tu ban phim
/*	int i;
	p = first;
	cin>>i;
	int count = 1;
	while(count != 1);
	{
		count ++;
		p= p->next;
	}
  	cout<<"tp thu  " << i<< " la: " <<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	*/
//}


///- Tao ds du lieu lay tu file, nhung sau tao xong thì ds dã sap xep theo tên thành pho


/*#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
struct toado{
 string tentp;
 int x;
 int y;
 toado *F;
 };
 struct DS{
 	toado td;
 	DS *next;
 } *first,*last,*tam;
 
DS *FIFO(){// first in first out
 	FILE * f=fopen("toado.txt","r");
 int x,y;
 first=NULL;
 while(!feof(f)){
 	char tp[50];
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
  	fscanf(f,"%d\n",&x);
 	fscanf(f,"%d\n",&y);
 	DS *p=new DS;
 	p->td.x=x;
 	p->td.y=y;
 	p->td.tentp=tp;
 	p->next=NULL;
 	if(first==NULL) first=p;
 	else
 		last->next=p;
 	last=p;
 }
	 fclose(f);
	 return first;
 }
 

void sapxep(DS *first)
{	
	for(DS *p=first;p!=NULL;p=p->next)
	{
		for(DS *q=p->next;q!=NULL;q=q->next)
		{
			if(p->td.tentp>q->td.tentp)
			{
				string temp = p->td.tentp;
				p->td.tentp=q->td.tentp;
				q->td.tentp=temp;
			}
		}
	}
}

void Xuat(DS *first){
 	for(DS *p=first;p!=NULL;p=p->next){
 		cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	 }
 }
 


int main()
{	
	first=FIFO();
	Xuat(first);
	sapxep(first);
	cout<<"Danh sach sau khi sap xep:\n";
	Xuat(first);
}*/



