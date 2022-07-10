#include <stdio.h>
#include <string.h>
#define sayi 100
int sizeofARRAY=0;
int elemansayisibul(char *sehirArray[]);
int ankarasayisibul(char *sehirArray[],int sizeARRAY);
int main(){
int sizeARRAY=0;
int AnkaraARRAY=0;
char sehir[sayi];
char *sehirArray[]={"Ankara","Adana","Balikesir",NULL};
   sizeARRAY=elemansayisibul(sehirArray);
   printf("Size of sehirArray: %d \n", sizeARRAY);
	sehirArray[sizeARRAY]=gets(sehir);
    puts(sehirArray[sizeARRAY]);
	AnkaraARRAY=ankarasayisibul(sehirArray,sizeARRAY);
	printf("Toplam Ankara Sayisi: %d \n",AnkaraARRAY);
}


int  elemansayisibul(char *sehirArray[]){
  		int k=0;
	    for (k=0;sehirArray[k]!='\0';k++){
        sizeofARRAY++;
}  
        return (sizeofARRAY);
}
int ankarasayisibul(char *sehirArray[],int sizeARRAY){
	int a,b;
	int ankara=0;
	
	for(a=0;a<sizeARRAY; a++){
		for(b=1;b<=sizeARRAY;b++){
	if(strcmp(sehirArray[a],sehirArray[b])==0){	
		ankara++;
	}
}}
return (ankara);

}
