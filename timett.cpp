#include<conio.h>
#include<iostream>
using namespace std; 
class time
{
	private:
	 int gio,phut,giay;
	public:
	 time()
	  	{
	  		gio=0;
			phut=0;
			giay=0; 
		   } 
	 ~time()
	    {gio=0;
		phut=0;
		giay=0; 
		 } 
	time(int gio,int phut,int giay)
	{this->gio=gio;
	 this->phut=phut;
	 this->giay=giay; 
	 } 
	 void nhap();
	 void in();
	// void normalize();
	 void advance(int h,int m,int s); 
	 time operator ++(int) ;
	  time operator --(int) ;
 }; 
 void time::nhap()
 {  
 	do
	 {
	   
 	cout<<"Nhap gio:";
	cin>>gio;
	  }
	  while ((gio<0)||(gio>=24));
	  	do
	 {
	   
 	cout<<"Nhap phut:";
	cin>>phut;
	  }
	  while ((phut<0)||(phut>=60));
	 	do
	 {
	   
 	cout<<"Nhap giay:";
	cin>>giay;
	  }
	  while ((giay<0)||(giay>=60));
}
void time::in()
{	
	cout<<gio<<":"<<phut<<":"<<giay; 
  }	   
time time::operator ++(int)
{

		time t1;
	t1.giay=giay+1;
	if (t1.giay>=59)
	 {
	 	t1.phut=phut+1;
		 t1.giay=0; 
	  } 
	  else t1.phut=phut;
	  if (t1.phut>=59)
	 {
	 	t1.gio=gio+1;
		 t1.phut=0; 
	  } 
	  else t1.gio=gio;
	  return t1; 
	   
	 
  } 
  time time::operator --(int)
{
	time t1;
	t1.giay=giay-1;
	if (t1.giay<=0)
	 {
	 	t1.phut=phut-1;
		 t1.giay=59; 
	  } 
	  else t1.phut=phut;
	  if (t1.phut<=0)
	 {
	 	t1.gio=gio-1;
		 t1.phut=59; 
	  } 
	  else t1.gio=gio;
	  return t1; 
}
int main()
{
	time t,t1,t2;
	cout<<"Nhap thoi gian :\n";
	t.nhap();
	cout<<"Thoi gian vua nhap la: ";
	t.in(); 
	t1=t++ ;
	t2=t--; 
	cout<<"\nThoi gian sau khi tang 1 giay: ";
	t1.in() ;
	cout<<"\nThoi gian sau khi giam 1 giay: ";
	t2.in() ;
 } 
