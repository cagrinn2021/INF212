#include <string.h>
#include <stdlib.h>
int uzunlukbul(char *iller[]);
int main () {
	
	char *iller[]={"Ankara","Adana","Balikesir",NULL};
	printf("dizinin uzunlugu %d= \n",uzunlukbul(iller));
	
}

int uzunlukbul(char *iller[]) {
	int counter=0,i;
	for(i=0;iller[i]!=NULL;i++){
		counter++;
	}
	return counter;
}
