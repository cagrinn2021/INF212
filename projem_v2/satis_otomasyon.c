#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "satis_otomasyon.h"

void anamenu() {
	printf("1.Satis\n");
	printf("2.Musteri Bilgisi\n") ;
	printf("3.Urun Bilgisi\n") ;
	printf("4.Musteri Analizleri\n") ;
	printf("5.Urun Analizleri\n") ;
}

void satismenu() {
	printf("\n1.Satis\n\n") ;
	printf("\t1.1.Satis On Islem\n") ;
	printf("\t1.2.Urun Satis\n") ;
	printf("\t1.3.Satis Son Islem\n\n") ;	
}
void satisislem() {
	printf("\n") ;
	printf("\t\t1.1.1.Son Fatura Bul\n") ;
	printf("\t\t1.1.2.Musteri Numarasi Bul\n") ;	
}

void urunsatis(){
	printf("\n") ;
	printf("\t\t1.2.1.Urun No Bul\n") ;
	printf("\t\t1.2.2.Miktar Bilgisi Gir\n") ;	
}

void musterimenusu() {
	printf("2.Musteri Bilgisi\n-----------------\n") ;
	printf("\t2.1.Tum musteriler\n") ;
	printf("\t2.2.Musteri tipine gore\n") ;
	printf("\t2.3.Bir musteri\n") ;
}
void urunmenusu(){
	printf("3.Urun Bilgisi\n\n") ;
	printf("\t3.1.Tum urunler\n") ;
	printf("\t3.2.Urun tipi\n") ;
	printf("\t3.3.Bir urun\n");	
}
void analizmenusu() {
	printf("4.Musteri Analizleri\n\n") ;
	printf("\t4.1.Bir musterinin satin aldigi urunler\n");
	printf("\t4.2.Bir musterinin satin aldigi toplam tutar\n") ;
	printf("\t4.3.Tum musterinin satin aldigi urunlerin toplam tutari\n") ;
	printf("\t4.4.Musterinin kargo ucreti\n");	
}

void urunanalizmenusu() {
	
	printf("5.Urun Analizleri\n\n") ;
	printf("\t5.1.Bir urunun toplam satis tutari\n") ;
	printf("\t5.2.Bir urun tipinin toplam satis tutari\n") ;
	printf("\t5.3.Tum urunlerin toplam satis tutari\n") ;
}
void musteri(node1 **m){
	node1 *temp1=*m;
	while(temp1!=NULL) {
		printf("%-5d %-15s %-15u %-6.2lf %-1.2lf\n",temp1->ID,temp1->name,temp1->type,temp1->x_coord,temp1->y_coord) ;
		temp1=temp1->next1;
	} } 
void mustertipi(node1 **mt,int x) {	
	node1 *temp=*mt;
	while(temp!=NULL) {
		if(temp->type==x) {
			printf("%-5d %-15s %-15u %-6.2lf %-1.2lf\n",temp->ID,temp->name,temp->type,temp->x_coord,temp->y_coord) ;
			}
		else if(temp->type==x){
			printf("%-5d %-15s %-15u %-6.2lf %-1.2lf\n",temp->ID,temp->name,temp->type,temp->x_coord,temp->y_coord) ;
		}
		temp=temp->next1;
	} }
void birmusteri(node1 **b,int x) {
	node1 *temp=*b;
	int i;
	i=0;
	while(temp!=NULL) {
		if(i==x-1){
		printf("%-5d %-15s %-15u %-6.2lf %-1.2lf\n",temp->ID,temp->name,temp->type,temp->x_coord,temp->y_coord) ;
	}
		temp=temp->next1;
		i++;
	} }
void urun(node **u){
	node *temp= *u;
	while(temp!=NULL) {
		printf("%-5d %-15s %-15u %-6.2lfTL\n",temp->ID,temp->name,temp->type,temp->price) ;
		temp=temp->next;
	}	} 

void uruntipi(node **ut,int x) {
	node *temp=*ut;	
	while(temp!=NULL) {		
		if(temp->type==x) {	
			printf("%-5d %-15s %-15u %-6.2lfTL\n",temp->ID,temp->name,temp->type,temp->price) ;			
		}	
		else if(temp->type==x){
			printf("%-5d %-15s %-15u %-6.2lfTL\n",temp->ID,temp->name,temp->type,temp->price) ;
		}
		temp=temp->next;
	} }
void birtaneurun(node **bu,int x) {	
	node *temp=*bu;
	int i;
	i=0;
	
	while(temp!=NULL) {	
		if(i==x-1){
		printf("%-5d %-15s %-15u %-6.2lfTL\n",temp->ID,temp->name,temp->type,temp->price) ;
	}
		temp=temp->next;
		i++;
	} }
void birtanemusteriurunler(node **bmu,node1 **bmuu,node2 **bmuuu,int x) {
	node2 *temp2=*bmuuu;//Fatura için
	node *temp=*bmu ;//Ürün için
	node1 *temp1=*bmuu;//Müþteri için
	
	
	int i=0;
	int musteriID;
	int faturaurunID;
	
	while(temp1!=NULL){	
		if(i==x-1){
			printf("%s aldigi urunler :\n",temp1->name) ;
			musteriID=temp1->ID;			
			while (temp2!=NULL) {
	  	if(temp2->customer_ID==musteriID) {
				faturaurunID=temp2->product_ID;
				while(temp!=NULL){	
				if(faturaurunID==temp->ID){	
							printf("%s\n",temp->name) ;
								}
						temp=temp->next;
    	} }			
		temp2=temp2->next2;
			} }	
		temp1=temp1->next1;
		i++;
	} }
void toplamtummusteri(node2 **t) {	
	node2 *temp=*t;
	double toplam;
	toplam=0;	
	while(temp!=NULL) {		
		toplam=toplam+temp->cost;		
		temp=temp->next2;
	}
	printf("Musterilerin aldigi urunlerin toplam tutari : %.2lfTL",toplam) ;
}
void kargoucreti(node1 **ku){
	node1 *temp=*ku;
	double sayi;	
	while(temp!=NULL) {		
		printf("%s musterinin kargo ucreti :",temp->name);
		sayi=sqrt(pow(temp->x_coord,2)+pow(temp->y_coord,2));
		printf("%.2lfTL\n",sayi) ;
		temp=temp->next1;	
	} }
void toplambirmusteri(node1 **bmt,node2 **bmtt,int x) {	
	node2 *temp2=*bmtt;
	node1 *temp1=*bmt;
	int i;
	i=0;	
	double toplam;
	toplam=0;	
	while(temp1!=NULL){		
		if(i==x-1){			
			printf("%s musterinin toplam alisveris ucreti :",temp1->name) ;		
			while(temp2!=NULL){				
				if(temp1->ID==temp2->customer_ID){	
				toplam=toplam+temp2->cost;		
				}
				temp2=temp2->next2;
			}	}	
		temp1=temp1->next1;
		i++;
	}
	printf("%.2lfTL\n",toplam);	
}


