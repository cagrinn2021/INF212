#include <iostream>
using namespace std;
class Test
{
static int count;
int id;
public:
Test()
{
count++;
id = count;
if(id == 5)
{
count--;
throw 5;
}
cout << "Constructing object number " << id <<" count "<<count << endl;
}
~Test()
{
count--;
cout << "Destructing object number " << id <<" count "<<count << endl;
}};
int Test::count = 0;
int main()
{
try
{
Test test_obj_array[6];
/*
Test obj1;
Test obj2;
Test obj3;
Test obj4;
Test obj5;
*/
}
catch(int i)
{
cout << "Caught " << i << endl;
}
}
