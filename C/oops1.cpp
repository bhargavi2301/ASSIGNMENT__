#include <iostream>
using namespace std;
class hospital
{
    public:
    void appoinmenttime()
    {
        cout<<"aaj subah hai"<<endl;
    }
    void madicine()
    {
        cout<<"madicine li hai"<<endl;
    }
    void nurse()
    {
        cout<<"service provider"<<endl;
    }
    void doctor()
    {
        cout<<"doctor visit pr hai"<<endl;
    }
    
};
main()
{
 hospital abcd;
 abcd.appoinmenttime();
 abcd.madicine();
 abcd.nurse();
 abcd.doctor();
}