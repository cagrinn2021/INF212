#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char *c[20];
	int k;
	c[0]="Ankara";
	for(k=1;k<20;k++) {
		c[k]=malloc(70);
		
		strcpy(c[k],c[0]);
	
	}
	
	
	puts(c[4]);
	for(k=1;k<20;k++){
		printf("%s\n",c[k]);
	}
		for(k=1;k<20;k++) 
		free(c[k]);

}
