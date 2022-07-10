#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct product {
	
	int ID;
	char name[50];
	unsigned int type : 4;
	double price;	
	struct product *next;
};
typedef struct product node;
struct customer {
	
	int ID;
	char name[50];
	unsigned int type: 1;
	double x_coord;
	double y_coord;
	struct customer *next1;
};
typedef struct customer node1;
struct purchased {

	int ID;
	int invoice_ID;
	int customer_ID;
	int product_ID;
	double cost;
	struct purchased *next2;
};
typedef struct purchased node2;
int main() {
	node *root1=malloc(sizeof(node))  ,*root2=malloc(sizeof(node)) ,*root3=malloc(sizeof(node)) ;	
	root1->ID=1;
	strcpy(root1->name,"sebze") ;
	root1->type=1;
	root1->price=3.5;
	root1->next=root2;
	root2->ID=2;
	strcpy(root2->name,"meyve") ;
	root2->type=2;
	root2->price=2.5;
	root2->next=root3;
	root3->ID=3;
	strcpy(root3->name,"et") ;
	root3->type=3;
	root3->price=45;
	root3->next=NULL;
	node1 *root11 = malloc(sizeof(node1)),*root22 = malloc(sizeof(node1)),*root33=malloc(sizeof(node1));
	root11->ID=1;
	strcpy(root11->name,"Tugce Guner") ;
	root11->type=1;
	root11->x_coord=15.6;
	root11->y_coord=9.9;
	root11->next1 = root22;
	root22->ID=2;
	strcpy(root22->name,"Gulay Mehri") ;
	root22->type=1;
	root22->x_coord=5.8;
	root22->y_coord=10.7;
	root22->next1 = root33;
	root33->ID=3;
	strcpy(root33->name,"Acelya Karagoz") ;
	root33->type=0;
	root33->x_coord=2.9;
	root33->y_coord=7.6;
	root33->next1 = NULL;
	node2 *root111=malloc(sizeof(node2)) ;
	node2 *root222=malloc(sizeof(node2)) ;
	node2 *root333=malloc(sizeof(node2)) ;	
	root111->ID=15; // 15 parça ürün sattýk
	root111->invoice_ID=1;//Fatura numarasi
	root111->customer_ID=root11->ID;//Tuðçe Güner adlý müþteri satýn aldý
	root111->product_ID=root1->ID;//urun numarasi
	root111->cost=root111->ID*root1->price;
	root111->next2=root222;
	root222->ID=10;
	root222->invoice_ID=2;
	root222->customer_ID=root11->ID;//Tuðçe Güner adlý müþteri satýn aldý
	root222->product_ID=root3->ID;
	root222->cost=root222->ID*root3->price;
	root222->next2=root333;	
	root333->ID=6;
	root333->invoice_ID=3;
	root333->customer_ID=root22->ID; //Gülay Mehri adlý müþteri satýn aldý
	root333->product_ID=root3->ID;
	root333->cost=root333->ID * root3->price;
	root333->next2=NULL;	
	basadon :	
	printf("ANA MENUYE HOSGELDINIZ\n") ;
	printf("***********************\n") ;
	anamenu() ;
	int secim;
	printf("\nYapmak istediginiz islemi giriniz :") ;
	scanf("%d",&secim) ;
	switch(secim) {	
		case 1:
			basadon1:
			satismenusu() ;
			int secim1;
			printf("Satis menusundeki yapmak istediginiz islemi giriniz :") ;
			scanf("%d",&secim1) ;
			switch(secim1) {
				
				case 1:
					
					satisislem() ;
					break;
					
				case 2:
					
					urunsatisi() ;
					break;
					
				case 3:
					
					break;
					
				default :
				
					printf("\nHatali islem,lütfen dogru islem giriniz!!!!\n\n") ;
					goto basadon1;
					break;		
		}
			break;
			
		//Satis menüsü için son
			
		case 2:
			
			basadon2:
			printf("\n") ;
			musterimenusu() ;
			
			int secim2;
			int secim22;//Müþteri tipi secimi
			int secim23;//Bir müþteri secmek icin
			printf("Lutfen yapmak isteginiz islemi seciniz :") ;
			scanf("%d",&secim2) ;
			
			switch(secim2) {
				
				case 1:
					printf("\n%-5s %-15s %-15s %-6s %-6s\n","ID","NAME","CUSTOMER TYPE","X COORD","Y COORD") ;
					printf("-----------------------------------------------------\n") ;
					musteri(&root11) ;
					break;
					
				case 2:
					
					printf("Erkek musteriler icin 1\nBayan musteriler icin 0 giriniz ");
					scanf("%d",&secim22) ;
					printf("\n%-5s %-15s %-15s %-6s %-6s\n","ID","NAME","CUSTOMER TYPE","X COORD","Y COORD") ;
					printf("-----------------------------------------------------\n") ;
					musteritipi(&root11,secim22) ;
					break;
					
				case 3:
					
					printf("Secmek istediginiz müsteri hangisi :") ;
					scanf("%d",&secim23) ;
					birmusteri(&root11,secim23) ;
					break;
					
				default:
					
					printf("\nHatali islem,lütfen dogru islem giriniz!!!!\n\n") ;
					goto basadon2;
					break;
				}
			break;
			
		case 3:
			
			basadon3:
			
			printf("\n");
			urunmenusu() ;
			
			int secim3;
			int secim32;
			int secim33;
			
			printf("\nLutfen yapmak istediginiz islemi seciniz :") ;
			scanf("%d",&secim3) ;
			
			switch(secim3) {
				
				case 1:
					
					printf("\n%-5s %-15s %-15s %-6s(TL)\n","ID","NAME","PRODUCT TYPE","PRICE") ;
					printf("***************************************************************\n") ;
					yazdirUrun(&root1) ;
				  break;
					
				case 2:
					
					printf("Hangi ürün tipini istediginizi  giriniz : ");
					scanf("%d",&secim32) ;
					printf("\n%-5s %-15s %-15s %-6s(TL)\n","ID","NAME","PRODUCT TYPE","PRICE") ;
					printf("*********************************************************\n") ;
					uruntipi(&root1,secim32) ;
					break;
					
				case 3:
					
					printf("Hangi urunu bulmak istiyorsunuz :") ;
					scanf("%d",&secim33) ;
					printf("\n%-5s %-15s %-15s %-6s(TL)\n","ID","NAME","PRODUCT TYPE","PRICE") ;
					printf("*************************************************************\n") ;
					birurun(&root1,secim33) ;
					break;
					
				default :
					
					printf("\nHatali islem,lütfen dogru islem giriniz!!!!\n") ;
					goto basadon3;
					
					break;

			}
			
			break;
			
		case 4:
			
			basadon4:
			printf("\n") ;
			analizmenusu() ;
			int secim4;
			int secim41;
			int secim42;	
			printf("\n") ;
			printf("Lutfen secmek istediginiz islemi giriniz :") ;
			scanf("%d",&secim4) ;
			printf("\n") ;
					
			switch(secim4){
				
		case 1:
					musteri(&root11) ;
					printf("Hangi musterinin satin aldigi urunleri kontrol etmek istiyorsunuz :") ;
					scanf("%d",&secim41) ;
					birtanemusteriurunler(&root1,&root11,&root111,secim41) ;
					break;
					
		case 2:
					musteri(&root11) ;
					printf("Hangi musterinin toplam alisveris tutarina bakmak istiyorsunuz :") ;
					scanf("%d",&secim42) ;
					
					break;
					
		case 3:
					toplamtummusteri(&root111) ;
					break;
					
		case 4:
				
					break;
					
		default :					
					printf("\nLutfen dogru islem giriniz!!!!\n") ;
					goto basadon4;					
					break;					
			}
		break;
			
		case 5:
			printf("\n") ;
			analizmenusu() ;
		break;
		
		default :			
			printf("\nHatali islem.Lutfen 1 ile 5 arasindaki secimleri giriniz!!!\n\n") ;
			goto basadon;	
			break;
			}
	return 0;
}

