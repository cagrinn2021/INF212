#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char *isim=(char *)malloc(20);
	char *soyisim=(char *)malloc(20);
	puts("isminizi girin");
	gets(isim);
	puts("soyisminizi girin");
	gets(soyisim);
	
	char *you=(char *)malloc(strlen(isim)+strlen(soyisim)+1);
	if(you==NULL){
		printf("Olusturulamadi");
	}
	strcat(isim," ");
	you=strcat(isim,soyisim);
	printf("\nsenin ismin =  %s ",you);
	return 0;
	
	
	
	
	
          }
