#include <stdio.h>
#include <conio.h>
int Demdong(char tf[50]){
      FILE *f=fopen(tf,"r");
	char tam[250],tam2[250];
	fgets(tam,250,f);
	int max=strlen(tam);
	while (!feof(f)){
		fgets(tam,250,f);
		if(max<strlen(tam)) {
			max=strlen(tam);
			tam2[0]='\0';
			strcat(tam2,tam);
		}
	}
	fclose(f);
	printf("Dong max= %s %d",tam2,max);}

