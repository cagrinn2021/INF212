#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;
int ekle_ilac_id,ekle_ilac_sayisi;
double ekle_ilac_fiyati;
int i=0,eczaneeklesayisi,ecznekleid,kacilac;
int x=0,y=0,qid;
int eczaneekle;
int menusec=0,menu1sec;
const int paralo=1234;
int sifre=0;
int eczanemaks=0;

int ilacekleeczanesec=0;
string qisim,qadres;
int ekle_ilac2_id;
string ekle_ilac2_isim;
int ekle_ilac2_sayisi;
double ekle_ilac2_fiyati;
int menu2sec=0;

class eczn {
	
	int eczn_id;
	string eczn_isim;
	string eczn_adres;
	public:	
		eczn() {
			eczn_id=0;
			eczn_isim="isim tanimsiz";
			eczn_adres="adres tanimsiz";
		}
		
		eczn(int idd, string eczn_isimm , string eczn_adress) {
			eczn_id=idd;
			eczn_isim=eczn_isimm;
			eczn_adres=eczn_adress;
		}
		
			eczn(const eczn &other){
			eczn_id=other.eczn_id;
			eczn_isim=other.eczn_isim;
			eczn_adres=other.eczn_adres;

			
	}
		eczn& operator=(const eczn &other){
			eczn_id=other.eczn_id;
			eczn_isim=other.eczn_isim;
			eczn_adres=other.eczn_adres;
			return *this;
	}
	
	
	void set_eczn_id(int id){
		eczn_id=id;		
	}
	void set_eczn_isim(string isim){
		eczn_isim=isim;	
	}
	void set_eczn_adres(string adres){
		eczn_adres=adres;	
	}
	int get_eczn_id(){
		return eczn_id;
	}
	string get_eczn_isim(){
		return eczn_isim;
	}
	string get_eczn_adres(){
		return eczn_adres;
	}
	
	void eczn_ekle();
};

class  ilac {

	
	int ilac_id;
	int ilac_sayisi;
	double ilac_fiyati;
	string ilac_isim;
	public:
	ilac() {
		ilac_id=0;
		ilac_sayisi=0;
		ilac_fiyati=0.0;
		ilac_isim="tanimsiz";
	}
		ilac(int id,int sayi,double fiyati,string ismi) {
		ilac_id=id;
		ilac_sayisi=sayi;
		ilac_fiyati=fiyati;
		ilac_isim=ismi;
	}
		ilac(const ilac &other) {
		ilac_id=other.ilac_id;
		ilac_sayisi=other.ilac_sayisi;
		ilac_fiyati=other.ilac_fiyati;
		ilac_isim=other.ilac_isim;
	}
		ilac& operator=(const ilac &other) {
		ilac_id=other.ilac_id;
		ilac_sayisi=other.ilac_sayisi;
		ilac_fiyati=other.ilac_fiyati;
		ilac_isim=other.ilac_isim;
		return *this;
	}
	

	void ilac_duzenle() {
		cout<<"hangi eczanenin ilac listesinden ilac düzeltmek istiyorsunuz"<<endl;
	string okuma;
	fstream file;
	int ilacduzenlesec=0;
	file.open("eczane_listesi.dat",ios::in);
	
		for(int ff=0;ff<50;ff++){
			while(!file.eof()) {
			
					file>>okuma;
					cout<<okuma<<"-";	
			}
			file.close();	
		}
		
		if(ilacduzenlesec==1){
			
		}				
	}
	
		
	void set_ilac_id(int id){
		ilac_id=id;
	}
	void set_ilac_sayisi(int sayi){
		ilac_sayisi=sayi;
	}
	void set_ilac_fiyati(double fiyat){
		ilac_fiyati=fiyat;
	}
	void set_ilac_isim(string isim){
		ilac_isim=isim;
	}
	int get_ilac_id(){
		return ilac_id;
	}
	int get_ilac_sayisi(){
		return ilac_sayisi;
	}
	double get_ilac_fiyati(){
		return ilac_fiyati;
	}
	string get_ilac_ismi(){
		return ilac_isim;
	}
	friend void ilac_ekle();
	friend void ilac_ara();
	
	
	
};

void ilac_listele(){
	int y;
	
	    ifstream eczaneGoster("eczane_listesi.dat", ios::in);
          string satir = " ";
		  if (eczaneGoster.is_open() ){
             while ( getline(eczaneGoster, satir) ){
               cout << satir << endl;
          }}
	   cout<<"Hangi eczanenin ilac listesini gormek istersiniz: ";
	   cin>>y;
	
	    if(y==1){
		ifstream eczaneGoster("ecz1.dat", ios::in);
          string satir = " ";
		  if (eczaneGoster.is_open() ){
             while ( getline(eczaneGoster, satir) ){
               cout << satir << endl;
    }
  }
}   
        if(y==2){
		ifstream eczaneGoster("ecz2.dat", ios::in);
          string satir = " ";
		  if (eczaneGoster.is_open() ){
             while ( getline(eczaneGoster, satir) ){
               cout << satir << endl;
    }
  }
}   
        if(y==3){
		ifstream eczaneGoster("ecz3.dat", ios::in);
          string satir = " ";
		  if (eczaneGoster.is_open() ){
             while ( getline(eczaneGoster, satir) ){
               cout << satir << endl;
    }
  }
}   
        if(y==4){
		ifstream eczaneGoster("ecz4.dat", ios::in);
          string satir = " ";
		  if (eczaneGoster.is_open() ){
             while ( getline(eczaneGoster, satir) ){
               cout << satir << endl;
    }
  }
}   
      
}


void eczaneyazdir() {
	string buleczane;
	string line;
	ifstream dosyaOku("eczane_listesi.dat");
	cout<<"bulmak istediginiz eczanenin ismini girin "<<endl;
	cin>>buleczane;
	if(dosyaOku.is_open()){
		while(getline(dosyaOku,line)){
			if(line.find(buleczane)!=string::npos){
				cout<<buleczane<<" eczanenin bilgileri detayli olarak "<<endl;
				cout<<line<<endl;
			}
		}
	}
	
	
}

void eczn_ekle() {
		
			cout<<"kac tane eczane eklemek istiyorsunuz ";
			cin>>eczaneekle;
	fstream file;
	string line;
	int row=0;
			string dosyaoku;
	file.open("eczane_listesi.dat",ios::in);
			
			
			if(file.is_open()){
				while(getline(file,line)){
					row++;
				}
				
			}
			cout<<row<<" adet eczane sisteminde kayitlidir\n girebilceginiz maks eczane dorttur "<<row<<endl;		
			
			if(row>=0&&row<4) { 
			
				std::ofstream dosyaeczaneismi;
				dosyaeczaneismi.open("eczane_listesi.dat",ios::app);
				eczn ekle_eczane[eczaneekle];


				for(i=0;i<eczaneekle;i++){
				
				
				cout<<"id gir";
				cin>>qid;
				cout<<"isim gir";
				cin>>qisim;
				cout<<"adres gir";
				cin>>qadres;
				ekle_eczane[i].set_eczn_id(qid);
				ekle_eczane[i].set_eczn_isim(qisim);
				ekle_eczane[i].set_eczn_adres(qadres);
				dosyaeczaneismi<<ekle_eczane[i].get_eczn_id()<<" ";
				dosyaeczaneismi<<ekle_eczane[i].get_eczn_isim()<<" ";
				dosyaeczaneismi<<ekle_eczane[i].get_eczn_adres()<<endl;	}
		}
		else{
			cout<<"maks eczane sayisi 4 olabilir tekrar deneyin"<<endl;
		}
	}

void ilac_ekle() {
	x=0;
	string okuma;
	fstream file;
	file.open("eczane_listesi.dat",ios::in);
	
		for(int ff=0;ff<500;ff++){
			while(!file.eof()) {
			
					file>>okuma;
					
					cout<<okuma<<"-";	
			}
			file.close();	
		}
	
	cout<<"\n1.eczane icin 1\n2.eczane icin 2\n3.eczane icin 3\n4.eczane icin 4\ntuslayin  = "<<endl;
cin>>ilacekleeczanesec;

fstream eczane1;
fstream eczane2;
fstream eczane3;
fstream eczane4;

eczane1.open("ecz1.dat", ios::app);
eczane2.open("ecz2.dat", ios::app);
eczane3.open("ecz3.dat", ios::app);
eczane4.open("ecz4.dat", ios::app);



if(ilacekleeczanesec==1) {
				cout<<"kac ilac girmek istiyorsunuz = ";
				cin>>kacilac;
				ilac iie[kacilac];
				for(i=0;i<kacilac;i++){

				cout<<i+1<<". ilacýn idsini girin";
				cin>>ekle_ilac2_id;
				cout<<i+1<<".ilacin ismini girin";
				cin>>ekle_ilac2_isim;
				cout<<i+1<<".ilacin sayisi girin";
				cin>>ekle_ilac2_sayisi;
				cout<<i+1<<".ilacin fiyatini girin";
				cin>>ekle_ilac2_fiyati;
				iie[i].set_ilac_id(ekle_ilac2_id);
				iie[i].set_ilac_sayisi(ekle_ilac2_sayisi);
				iie[i].set_ilac_fiyati(ekle_ilac2_fiyati);
				iie[i].set_ilac_isim(ekle_ilac2_isim);
				
				eczane1<<iie[i].get_ilac_id()<<"=id  ";
				eczane1<<iie[i].get_ilac_sayisi()<<"=sayisi ";
				eczane1<<iie[i].get_ilac_fiyati()<<"=fiyati ";
				eczane1<<iie[i].get_ilac_ismi()<<endl;
				}

				
				
				


			}
				
			
			else if(ilacekleeczanesec==2) {
				cout<<"kac ilac girmek istiyorsunuz = ";
				cin>>kacilac;
				ilac iie[kacilac];
				for(i=0;i<kacilac;i++){

				cout<<i+1<<". ilacýn idsini girin";
				cin>>ekle_ilac2_id;
				cout<<i+1<<".ilacin ismini girin";
				cin>>ekle_ilac2_isim;
				cout<<i+1<<".ilacin sayisi girin";
				cin>>ekle_ilac2_sayisi;
				cout<<i+1<<".ilacin fiyatini girin";
				cin>>ekle_ilac2_fiyati;
				iie[i].set_ilac_id(ekle_ilac2_id);
				iie[i].set_ilac_sayisi(ekle_ilac2_sayisi);
				iie[i].set_ilac_fiyati(ekle_ilac2_fiyati);
				iie[i].set_ilac_isim(ekle_ilac2_isim);

				eczane2<<iie[i].get_ilac_id()<<"=id  ";
				eczane2<<iie[i].get_ilac_sayisi()<<"=sayisi  ";
				eczane2<<iie[i].get_ilac_fiyati()<<"=fiyati ";
				eczane2<<iie[i].get_ilac_ismi()<<endl;


				x++;
				
				}

}
else if(ilacekleeczanesec==3) {
				cout<<"kac ilac girmek istiyorsunuz = ";
 				cin>>kacilac;
 				ilac iie[kacilac];
				for(i=0;i<kacilac;i++){

				cout<<i+1<<". ilacýn idsini girin";
				cin>>ekle_ilac2_id;
				cout<<i+1<<".ilacin ismini girin";
				cin>>ekle_ilac2_isim;
				cout<<i+1<<".ilacin sayisi girin";
				cin>>ekle_ilac2_sayisi;
				cout<<i+1<<".ilacin fiyatini girin";
				cin>>ekle_ilac2_fiyati;
				iie[i].set_ilac_id(ekle_ilac2_id);
				iie[i].set_ilac_sayisi(ekle_ilac2_sayisi);
				iie[i].set_ilac_fiyati(ekle_ilac2_fiyati);
				iie[i].set_ilac_isim(ekle_ilac2_isim);
			
				eczane3<<iie[i].get_ilac_id()<<"=id  ";
				eczane3<<iie[i].get_ilac_sayisi()<<"=sayisi  ";
				eczane3<<iie[i].get_ilac_fiyati()<<"=fiyati ";
				eczane3<<iie[i].get_ilac_ismi()<<endl;
				

				x++;
				
				}
			
				
}
else if(ilacekleeczanesec==4) {
				cout<<"kac ilac girmek istiyorsunuz = ";
				cin>>kacilac;
				ilac iie[kacilac];
				for(i=0;i<kacilac;i++){

				cout<<i+1<<". ilacýn idsini girin";
				cin>>ekle_ilac2_id;
				cout<<i+1<<".ilacin ismini girin";
				cin>>ekle_ilac2_isim;
				cout<<i+1<<".ilacin sayisi girin";
				cin>>ekle_ilac2_sayisi;
				cout<<i+1<<".ilacin fiyatini girin";
				cin>>ekle_ilac2_fiyati;
				iie[i].set_ilac_id(ekle_ilac2_id);
				iie[i].set_ilac_sayisi(ekle_ilac2_sayisi);
				iie[i].set_ilac_fiyati(ekle_ilac2_fiyati);
				iie[i].set_ilac_isim(ekle_ilac2_isim);
				eczane4<<iie[i].get_ilac_id()<<"=id  ";
				eczane4<<iie[i].get_ilac_sayisi()<<"=sayisi  ";
				eczane4<<iie[i].get_ilac_fiyati()<<"=fiyati ";
				eczane4<<iie[i].get_ilac_ismi()<<endl;
				

				x++;
				
				}
				
				
				
				


}
else {
	cout<<"yanlis girdiniz"<<endl;
}


	
	
}


	

	
	
	



//dosyadan okuma ve ekrana yazdirma

void ilac_ara() {
	ifstream dosyaOku1("ecz1.dat");
	ifstream dosyaOku2("ecz2.dat");
	ifstream dosyaOku3("ecz3.dat");
	ifstream dosyaOku4("ecz4.dat");
	string line1;
	string line2;
	string line3;
	string line4;
	string bulilac;
	cout<<"aramak istediginiz ilaci girin"<<endl;
	cin>>bulilac;
//----	
	if(dosyaOku1.is_open()) {
			while(getline(dosyaOku1,line1)){
		if(line1.find(bulilac)!=string::npos){
			cout<<bulilac<<" ilaci ecz1de var ve detaylar"<<endl;
			cout<<line1<<endl;
			
		}
	}
		
	}//--
	//----	
	if(dosyaOku2.is_open()) {
			while(getline(dosyaOku2,line2)){
		if(line2.find(bulilac)!=string::npos){
			cout<<bulilac<<" ilaci ecz1de var ve detaylar"<<endl;
			cout<<line2<<endl;
			
		}
	}
		
	}//--
	//----	
	if(dosyaOku3.is_open()) {
			while(getline(dosyaOku3,line3)){
		if(line3.find(bulilac)!=string::npos){
			cout<<bulilac<<" ilaci ecz1de var ve detaylar"<<endl;
			cout<<line3<<endl;
			
		}
	}
		
	}//--
	//----	
	if(dosyaOku4.is_open()) {
			while(getline(dosyaOku4,line4)){
		if(line4.find(bulilac)!=string::npos){
			cout<<bulilac<<" ilaci ecz1de var ve detaylar"<<endl;
			cout<<line4<<endl;
			
		}
	}
		
	}//--

}

void eczaneleri_goster() {
			
  ifstream dosyaOku("eczane_listesi.dat");
  string satir = "";

  if ( dosyaOku.is_open() ){

    while ( getline(dosyaOku, satir) ){
      cout << satir << endl;
    }
}

	
}



int secenek1() {
	cout<<"Eczane Girisi icin =1 \n Musteri Girisi icin =2 \ntuslayin = ";
		cin>>menusec;
		return menusec;
}
int secenek2() {
	cout<<"1= Eczane Listesi Olustur\n2= Eczane Ekle\n3= ilac Ekle\n4= ilac Duzenle\n";
	cin>>menu1sec;
	return menu1sec;
}

string ecznekleisim,ecznekleadres,dosyaisimkaydet;

string ekle_ilac_isim;

int bir=1;
int sayacx=0;

int main () {
	
	secenek1();
	if(menusec==1){
	cout<<"sifre giriniz = ";
	cin>>sifre;
	if(sifre==paralo) {
		secenek2();
		if(menu1sec==1){
			ofstream dosyaeczaneismi("eczane_listesi.dat");

			cout<<"kac eczane eklemek istiyorsunuz(maks sayi dortdur)";
			cin>>eczaneeklesayisi;
			
			eczn e[eczaneeklesayisi];
												
			ilac ii[eczaneeklesayisi];


			if(eczaneeklesayisi<5){
			
			i=0;
			while(i<eczaneeklesayisi){
				cout<<i+1<<". id giriniz =";
				cin>>ecznekleid;
				cout<<i+1<<". eczane isim giriniz =";
				cin>>ecznekleisim;
				cout<<i+1<<". eczane adres giriniz =";
				cin.ignore();
				getline(cin,ecznekleadres);
				e[i].set_eczn_id(ecznekleid);
				e[i].set_eczn_isim(ecznekleisim);
				e[i].set_eczn_adres(ecznekleadres);
				dosyaeczaneismi<<e[i].get_eczn_id()<<" ";
				dosyaeczaneismi<<e[i].get_eczn_isim()<<" ";
				dosyaeczaneismi<<e[i].get_eczn_adres()<<endl;
			
				i++;
			}}
			else{ cout<<"dortden kucuk girin";
			}
			
			y=0;
			ofstream eczane1("ecz1.dat");
      	    ofstream eczane2("ecz2.dat");
      	    ofstream eczane3("ecz3.dat");
      	    ofstream eczane4("ecz4.dat");
			for(i=0;i<eczaneeklesayisi;i++){

				cout<<e[i].get_eczn_id()<<"."<<e[i].get_eczn_isim()<<"."<<e[i].get_eczn_adres()<<" adresindeki ezcanenin ilac bilgilerini girin";
				cout<<"\n kac ilac sayisi girmek istiyorsunuz ";
				cin>>kacilac;
				if(kacilac<11&&kacilac>0){
				

				
				while(x<kacilac){

				cout<<x+1<<". ilacýn idsini girin";
				cin>>ekle_ilac_id;
				cout<<x+1<<".ilacin ismini girin";
				cin>>ekle_ilac_isim;
				cout<<x+1<<".ilacin sayisi girin";
				cin>>ekle_ilac_sayisi;
				cout<<x+1<<".ilacin fiyatini girin";
				cin>>ekle_ilac_fiyati;
				ii[i].set_ilac_id(ekle_ilac_id);
				ii[i].set_ilac_sayisi(ekle_ilac_sayisi);
				ii[i].set_ilac_fiyati(ekle_ilac_fiyati);
				ii[i].set_ilac_isim(ekle_ilac_isim);
				
				
				
				
				if(y==0){
				eczane1<<ii[i].get_ilac_id()<<" ";
				eczane1<<ii[i].get_ilac_sayisi()<<" ";
				eczane1<<ii[i].get_ilac_fiyati()<<" ";
				eczane1<<ii[i].get_ilac_ismi()<<endl;
				
				}
				if(y==1){
				eczane2<<ii[i].get_ilac_id()<<" ";
				eczane2<<ii[i].get_ilac_sayisi()<<" ";
				eczane2<<ii[i].get_ilac_fiyati()<<" ";
				eczane2<<ii[i].get_ilac_ismi()<<endl;
				}
				if(y==2){
				eczane3<<ii[i].get_ilac_id()<<" ";
				eczane3<<ii[i].get_ilac_sayisi()<<" ";
				eczane3<<ii[i].get_ilac_fiyati()<<" ";
				eczane3<<ii[i].get_ilac_ismi()<<endl;
				}
				if(y==3){
				eczane4<<ii[i].get_ilac_id()<<" ";
				eczane4<<ii[i].get_ilac_sayisi()<<" ";
				eczane4<<ii[i].get_ilac_fiyati()<<" ";
				eczane4<<ii[i].get_ilac_ismi()<<endl;
				}

				x++;
				
				}
				y++;
			}
	
			x=0;
		
		
			}

	
		}
		else if(menu1sec==2){

				eczn_ekle();
	
		}
		else if(menu1sec==3){
			ilac_ekle();
	
}			
	
		else if(menu1sec==4){
				string okumaa;
				fstream filee;
				filee.open("eczane_listesi.dat",ios::in);
	
		
		for(int ff=0;ff<70;ff++){
			while(!filee.eof()) {
			
					filee>>okumaa;
					cout<<okumaa<<" ";	
			}
			filee.close();	
			
		}
		
	
			
		}
		else{
			cout<<"yanlis girdiniz";
		}
	}

		
}
else if(menusec==2){
	
	cout<<"1=Ilaç Ara\n2=Eczane Listele\n3=Herhangi bir Eczaneyi Göster\n4=Herhangi bir Eczaneye ait Ilac Listesi";
	cin>>menu2sec;
	if(menu2sec==1){
	ilac_ara();
	}
	else if(menu2sec==2){
     eczaneleri_goster();
	}	
	else if(menu2sec==3){
		eczaneyazdir();
	}	
	else if(menu2sec==4){
		
		ilac_listele();
	}	
		
	}
else {
	
			cout<<"tuslama hatasi";
	}

}
	




