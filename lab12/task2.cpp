#include <iostream>
#include <string.h>
using namespace std;
class MetreSantim
{
int m;
int cm;
public:
MetreSantim(int m1, int cm1);
void Put(int m1,int cm1);
void Show();
class Hata
{
public:
int deger;
char str[200];
Hata(int hatadegeri,char *fonk)
{
deger=hatadegeri;
strcpy(str,fonk);
}
};
};
MetreSantim::MetreSantim(int m1,int cm1)
{
if ( cm1 > 99 )
throw(Hata(cm1,"Constructor "));
m=m1;
cm=cm1;
}
void MetreSantim::Put(int m1,int cm1)
{
if ( cm1 > 99 )
throw(Hata(cm1,"Put Fonksiyonu"));
m=m1;
cm=cm1;
}
void MetreSantim::Show()
{
cout << "(" << m << "," << cm << ")" << endl;
}


int main(void)
{
try
{
MetreSantim x(5,10);
x.Show();
x.Put(10,150);
x.Show();
return 0;
}
catch(MetreSantim::Hata err)
{
cout << "Santimetre olarak " << err.deger
<< " degerini giremezsiniz ->>" << err.str << endl;
}
}
