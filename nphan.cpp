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
int main()
{

 FILE * f=fopen("toado.txt","r");

 while(!feof(f)){
     toado td;
 	char tp[50];fflush(stdin);
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
 	td.tentp=tp;
 	fscanf(f,"%d\n",&td.x);
 	fscanf(f,"%d\n",&td.y);
	 cout<<td.tentp<<" "<<td.x<<" "<<td.y<<endl;

 }
 fclose(f);
}
