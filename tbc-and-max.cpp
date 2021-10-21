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
     printf("%d %d \n",m,n);
	while(!feof(f)){
		for(int i=0;i<m;i++)
		  for(int j=0;j<n;j++){
		  	fscanf(f,"%d",&a[i][j]);
		  }
	}
fclose(f);
	//Xuat mang a
		for(int i=0;i<m;i++){
		  for(int j=0;j<n;j++){
		  	  printf("%d ",a[i][j]);
		  }
		  printf("\n");
	}


//Nhap vao sv thu i -> in ra bang diem cua sv nay
	//- Nhap vào so: i
	// in ra a[i][j], j=1..n
	
	//Nhap vao mon thu j, in ra bang diem mon nay
		//- Nhap vào so: j
	// in ra a[i][j], i=1..m
	
int k,t;
scanf("%d", &k);
for(int j=0;j<n;j++){
		  	  printf("%d ",a[k][j]);
		  }
		printf("\n");
		scanf("%d", &t);
		for(int i=0;i<m;i++){
		  	  printf("%d ",a[i][t]);
		  }
//	int max = a[0][0];
//    for (int i = 0; i < m; i++)    
//        for( int j = 0; j < n; j++)
//        {
//            if( a[i][j] > max)
//            {
//            	max = a[i][j];
//            }
//        }
//                 printf("Diem max la : %d ", max);
    int tong=0;
    float tbc;
    for (int i=0;i<m;i++)
    for (int j = 0; j<n;j++)
     tong=tong+a[i][j];
     tbc=(float)tong/(m*n);
     printf ("TBC la: %.2f", tbc);
}

