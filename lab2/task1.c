#include <stdio.h>
#include <stdlib.h>

int main () {
	int *p,i;
	p=(int *)malloc(10*sizeof(int));
	for(i=0;i<10;i++){
		printf("%d\n",*(p+i));
	}
	free(p);
}
