#include<stdio.h>
int main(){
	FILE*	f = fopen("tam.txt", "r");
	   if (f == NULL) {
	      puts("file khong mo duoc");return 1;
	   }
	   int a[256]={0};
	while(!feof(f)){
		int ch=fgetc(f);
		a[ch]=a[ch]+1;
	}
	FILE*	f2 = fopen("lulu.txt", "w");
	for(int i=0;i<256;i++){
		if(a[i]!=0){
			printf("\n%c: %d",i,a[i]);
			fprintf(f2,"\n%c: %d",i,a[i]);
		}
	}
	fclose(f2);
}
