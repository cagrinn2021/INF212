#ifndef kutuppp
#define kutuppp
#include <string>
using namespace std;
class myException
{
public:
myException(){error=0; message = "Default myException";}
myException(int err, string message)
{
error=err; this->message = message;
}
string what()
{
switch (error)
{
case 0:
message=message+"err 0 hata:sifirdan farkl� tamsay� girin ";
break;
case 1:
message=message+"err 1 hata:b�y�k say� ";
break;
case 2:
message=message+"err 2 hata:k���k say�";
break;
default:
message=message+"err def";
}
return message;
}
private:
int error;
string message;
};
#endif
