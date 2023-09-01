#include<iostream>
using namespace std;



 class stationary
 {
 
 	public:
 	
 	void pen()
   {
 
    cout<<"pen"<<endl;	
   }
    void book()
    {
    	cout<<"book"<<endl;
	}
	void calculator()
	{
		cout<<"calculator"<<endl;
	}
	void pencil()
	{
		cout<<"pencil"<<endl;
	}
};
main()
{
   	stationary abc;
	
	
	abc.pen();
	abc.book();
	abc.calculator();
	abc.pencil();
	
}