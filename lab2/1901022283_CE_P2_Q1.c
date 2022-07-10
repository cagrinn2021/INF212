#include <stdio.h>
#include <stdlib.h>
int uzunluk,k,i;
int main () {
	printf("dizi uzunlgu=");
	scanf("%d",&uzunluk);
	float *p=(float *)calloc(uzunluk,sizeof(float));
	puts("dizi elemanlari girin");
	for(k=0;k<uzunluk;k++){
		printf("dizinin elemanlarini girin =");
		scanf("%f",&p[k]);		
	}	
float enbuyuk =*p; // sure yetmedi fonksiyon icin
for(i=0;i<uzunluk;++i){
	if( enbuyuk<p[i] )
	enbuyuk=p[i];
}

printf("en buyuk sayi= %f\n",enbuyuk);
free(p); 
}
