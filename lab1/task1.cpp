#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int upper_is(int i,int count,char ch );
int lower_is(int i,int count,char ch);
int graphic_iss(int i,int count,char ch);
int prntbl_is(int i,int count,char ch);
int cnt_space(int i,int count,char ch);

main () {
	
	
	char ch;
	char ch_ar[]="INF \a 211 \t Course";
	char ch_ar_1[]="211\n Course";
	int i=0,j=0,count=0;
	
	count=cnt_space(i,count,ch);
	printf("cumledeki bosluk %d = \n",count);

	count=0;
	count=prntbl_is(i,count,ch);
	printf("yazidirabilir sayilar %d",count);
	count=0;
	count=graphic_iss(i,count,ch);
	printf("grafikel sayilar %d",count);
	count=0;
	count=lower_is(i,count,ch);
	count=0;
	printf("cumledeki kücük harflerin sayisi %d",count);
	count=0;
	count=upper_is(i,count,ch);
	printf("buyuk harf sayisi%d",count);
}


int cnt_space(int i,int count,char ch) {
	char buf[]="INF 212 INF 212 ";
	ch=buf[0];
for(i=0;ch!='\n';i++){
	ch=buf[i];
	if(isspace(ch)){
		count++;
	}

}
return count;
}

int prntbl_is(int i,int count,char ch) {
	
	char buf[]="INF.212 \t ..INF.212";
	ch=buf[0];
	for(i=0;ch=!'\n';i++){
		ch=buf[i];
		if(isprintf(ch)){
			count++;
		}
	}
	return count;
}

int graphic_iss(int i,int count,char ch) {
	
	char buf[]="INf.212. \t ..ýnf.212";
	ch=buf[0];
	for(i=0;ch!='\n';i++)
	{
		if(isgraph(ch)){
			count++;
}	}              	
return count;
	}        
	
int lower_is(int i,int count,char ch){
	char buf[]="INF212 inf212 INF212";
	ch=buf[0];
while(ch!='\n'){
	if(islower(ch)){
		count++;
	}
}
	return count;
}
	



int upper_is(int i,int count,char ch ){
	
	char buf[]="INF212121SDFSXxxxxxxfff";
	ch=buf[0];
	for(i=0;ch=!'\n';i++) {
		
		if(isupper(ch)){
			count++;
		}
	}
	return count;
}
	
	
	
