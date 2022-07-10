#ifndef _SATIS_OTOMASYON_
#define _SATIS_OTOMASYON_

//ürün için struct oluþturuldu
struct product {
	
	int ID;
	char name[50];
	unsigned int type : 4;
	double price;	
	struct product *next;

};
typedef struct product node;

//Müsteri için struct oluþturuldu 
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

//Fonksiyonlarýn isimleri

void anamenu();
void satismenusu();
void satisislem();
void urunsatisi();
void musterimenusu();
void urunmenusu();
void analizmenusu() ;
void urunanalizmenusu();
void musteri(node1 **m);
void musteritipi(node1 **mt,int x);
void birmusteri(node1 **b,int x);
void urun(node **u);
void uruntipi(node **ut,int x);
void toplambirmusteri(node1 **bmt,node2 **bmtt,int x) ;
void birtaneurun(node **bu,int x);
void birtanemusteriurunler(node **bmu,node1 **bmuu,node2 **bmuuu,int x) ;
void toplamtummusteri(node2 **t);
void kargoucreti(node1 **ku);


#endif





