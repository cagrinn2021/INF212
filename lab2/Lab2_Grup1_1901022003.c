#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float enbuyuk(float *array,int n);

int main(){
	
	int n,i;
	float buyukk;
	
	printf("Dizinin uzunlugunu girin: ");
	scanf("%d",&n);
	
	float *ptr=(float*)calloc(n,sizeof(float));
	
	for(i=0;i<n;i++){
		printf("\n %d. eleman = ",i);
		scanf("%f",&ptr[i]);
	}
	
	buyukk=enbuyuk(ptr,n);
	
	printf("\n\nenbuyuk sayi = %f",buyukk);
	
	return 0;
}

float enbuyuk(float *array,int n){
	int k;
	float buyuk=array[0];
	for(k=0;k<n;k++){
		if(array[k]>buyuk){
			buyuk=array[k];
		}
	}
	
	return buyuk;
}
