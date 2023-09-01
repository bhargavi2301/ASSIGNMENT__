#include<iostream>
using namespace std;
 
 class hospital
 {
 	public:
 	
 	 virtual void medicine();
 	 virtual void madicinestock();
 	 virtual void payment();
 	 virtual void bill();
 	 
 	 
 };
 class medical:public hospital
 {
        
      public:
       	 void madicinecharge()
       	 {
       	 	cout<<"madicinecharge"<<endl;
        }
        void ambulancecharge()
        {
        	cout<<"ambulancecharge"<<endl;
		}
		void  admitcharge()
		{
			cout<<"admitcharge"<<endl;
		}
	};
	
	
	
	main()
	{
	
	medical.xyz;
	xyz.madicincharge();
	xyz.ambulancecharge();
	xyz.admitchargea();
   }
       	 
    