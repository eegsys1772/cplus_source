#include<stdio.h>
int main(){
	int a[10][10];
	int m,n;//m: domg, n: cot
	FILE*	f = fopen("diem.txt", "r");
	   if (f == NULL) {
	      puts("file khong mo duoc");return 1;
	   }
     //doc ra tu file m va n
     fscanf(f,"%d",&m); fscanf(f,"%d",&m);
     //printf("%d %d",m,n); 
	while(!feof(f)){
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				fscanf(f,"%d",&a[i][j]); 
	}
	fclose(f);
	//Xuat mang a
	for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				printf("d",a[i][j]); 
			}
	}
}
