#include<stdio.h>
int main(){
	int a[10][10];
	int m,n;//m: domg, n: cot
	FILE*	f = fopen("diem.txt", "r");
	   if (f == NULL) {
	      puts("file khong mo duoc");return 1;
	   }
     //doc ra tu file m va n
     fscanf(f,"%d",&m);fscanf(f,"%d",&n);
     //printf("%d %d",m,n);
//	while(!feof(f)){ 
		for(int i=0;i<m;i++)
		  for(int j=0;j<n;j++){
		  	fscanf(f,"%d",&a[i][j]);
		  }
	}
fclose(f);
	//Xuat mang a
		for(int i=0;i<m;i++){
		  for(int j=0;j<n;j++){
		  	  printf("%d  ",a[i][j]);
		  }
		  printf("\n");
	}
//Nhap vao sv thu i -> in ra bang diem cua sv nay
	//- Nhap vào so: i
	// in ra a[i][j], j=1..n
	
	//Nhap vao mon thu j, in ra bang diem mon nay
		//- Nhap vào so: j
	// in ra a[i][j], i=1..m
/*	scanf(%d,&p) ;
for(int i=0;i<0;i++){
	scanf(i,"%d",&a[i][j]);
	printf("%d",a[i][j]);}
	print(""); 
 	scanf(%d,&q) ;
for(int j=0;i<0;i++){
	scanf(i,"%d",&a[i][j]);
	printf("%d",a[i][j]);}
	print(""); 
 
	  	}*/
	  	int k,t; 
	  	scanf("%d",&k);
			for(int j=0;j<n;j++) {
				printf("%d ",a[k][j]);
			}
		printf("\n");
		scanf("%d",&t);
			for(int i=0;i<m;i++) {
				printf("%d ",a[i][t]);
			}
		
//In ra diem lon nhat cho tung sinh viên
	int p;
	scanf("%d",&p);
		for(int i =0;)
	printf("\n") ;
//In ra trung binh cong cua tung sv
	int q;
}
