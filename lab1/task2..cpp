#include <stdio.h>
#include <string.h>
int lengt_of_string(char *sehirArray[]);
int ilkuzunluk(char *sehirArray[]);
void copy_string(char *sehira,char *sehirb);
int esitveson(char *sehirArray[],int sizeARRAY);
void camp_string(char *sehira,char *sehirb);
int main() {
	char *sehirArray[]={"ankaraaa","adana","balikesir","konya","hatay","zonguldak",NULL};
	char sehir1[50]="ankara",sehir2[60]="konya";
	char sehir[50];
	int sizeARRAY=lengt_of_string(sehirArray);
	printf("dizi eleman sayisi %d\n",lengt_of_string(sehirArray));
	printf("ilk elemanin uzunlugu %d\n",ilkuzunluk(sehirArray));
	copy_string(sehir1,sehir2);
	camp_string(sehir1,sehir2);
	printf("son sehrinizi girin");
	sehirArray[sizeARRAY]=gets(sehir);
	
	
	printf("esit mi? = %d ",esitveson(sehirArray,sizeARRAY));
}
int lengt_of_string(char *sehirArray[]){
	int size_of_ARRAY=0,k=0;
	for(k=0;sehirArray[k]!=NULL;k++){
		size_of_ARRAY++;
	} 
	return size_of_ARRAY;
}
int ilkuzunluk(char *sehirArray[]){
	int uzunluk=0;
	uzunluk=strlen(sehirArray[0]);
	return uzunluk;
}
void copy_string(char *sehira,char *sehirb){	
	strcpy(sehira,sehirb);
	puts(sehira);
}

void camp_string(char *sehira,char *sehirb){
	
	strcat(sehira,sehirb);
	puts(sehira);
}

int esitveson(char *sehirArray[],int sizeARRAY){
	int esit=33;
	if(strcmp(sehirArray[0],sehirArray[sizeARRAY])==0){
		esit=1;
	}
	else {
		esit=0;
	}
	return esit;
}



