#include <stdio.h>
#include <conio.h>
int main(){
	FILE* f= fopen("bt1.cpp","r");
	if(f==NULL){
		printf("Bo tay"); return 0;
	} 
	while(!feof(f)){
		printf("%c",fgetc(f));
	}
	fclose(f);
} 
//tinh dung luong
#include <stdio.h>
#include <conio.h>
int main(){
    FILE* f= fopen("bt1.cpp","r");//Mo file de doc
    if(f==NULL){//ko mo duoc
    	printf("Bo tay"); return 0;
	}
	int d=0;
	while(!feof(f)){//duyet tu dau den cuoi file
	     char ch=fgetc(f);
		printf("%c",ch);//doc ra 1 ky tu va hien thi ra man hinh
		if(ch==10) d++;
		d++;
	}
	printf("\nDung luong: %d",d-1);
	fclose(f);//dong file
}

//tinh so dong
#include <stdio.h>
#include <conio.h>
int main(){
    FILE* f= fopen("bt1.cpp","r");//Mo file de doc
    if(f==NULL){//ko mo duoc
    	printf("Bo tay"); return 0;
	}
	int d=0;
	while(!feof(f)){//duyet tu dau den cuoi file
	     char tam[255];
	     fgets(tam,255,f);
		printf("%s",tam);//doc ra 1 dong va hien thi ra man hinh
		d++;
	}
	printf("\nSo dong: %d",d-1);
fclose(f);//dong file
}

//doc
#include <stdio.h>
#include <conio.h>
int main(){
    FILE* f= fopen("bt1.cpp","r");//Mo file de doc
    if(f==NULL){//ko mo duoc
    	printf("Bo tay"); return 0;
	}
	int d=0;

	     int max=strlen(tam);
	while (!feof(f)){
		fgets(tam,250,f);
		if(max<strlen(tam)) {
			max=strlen(tam);
			tam2[0]='\0';
			strcat(tam2,tam);
		}
		printf("%s",tam);//doc ra 1 dong va hien thi ra man hinh
		d++;
	}
	int max=strlen(tam);
	while (!feof(f)){
		fgets(tam,250,f);
		if(max<strlen(tam)) {
			max=strlen(tam);
			tam2[0]='\0';
			strcat(tam2,tam);
		}
fclose(f);//dong file
printf("Dong max= %s %d",tam2,max);
}


