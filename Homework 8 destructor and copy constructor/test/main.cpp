#include <iostream>
#include <cstdlib>

using namespace std;
class Caaa
{
public:
    Caaa();
    ~Caaa();
};
Caaa::Caaa()
{
    cout<<"constructor called"<<endl;
}
Caaa::~Caaa()
{
    cout<<"destructor called"<<endl;
}
int main()
{
    Caaa *obj=new Caaa;
    cout<<"The constructor is "<< sizeof(obj)<<" bytes."<<endl;
    delete obj;
    system("pause");
    return 0;
}