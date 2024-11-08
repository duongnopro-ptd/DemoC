#include <iostream> 
#include <conio.h>
using namespace std; 
class diem
 {private :
     int x,y;
  public:
   void nhap()
   {
   	cout<<"Nhap toa do t1 ";
	   cin>>x;
	cout<<"Nhap toa do t2 ";
	   cin>>y;
	    
	}
	void in()
	{
	
	cout <<"("<<x<<";"<<y<<")";
}
 };
 int main()
 {diem d1;
 cout<<"Nhap diem A \n";d1.nhap() ;
// cout<<"Nhap diem t2 ";d2.nhap() ;	
 cout<<"Diem A ";d1.in() ;
 //cout<<" diem t2 ";d2.in() ;	
  } 
