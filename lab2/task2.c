#include<stdio.h>
#include<stdlib.h> // for malloc(), calloc(), realloc() and free()
int main(){
int *p = NULL, i, smallest ;
p = (int *) calloc (10,sizeof(int)); // allocate memory for 10 integers

if(p == NULL){
printf("memory allocation is failed\n");
}
for(i = 0 ; i < 10 ; ++i){
*(p+i) = rand() ;
printf("%d\n",*(p+i));
 }
 smallest =*p;
 for(i = 0 ; i < 10 ; ++i)
 
if( smallest > p[i] )
smallest = p[i] ;
printf("The smallest element in array = %d\n", smallest) ;
free(p); // release the memory
p = NULL ; //assign NULL to pointer save you from some mistakes
 return 0;
 }
