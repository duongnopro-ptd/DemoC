#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h> 
using namespace std; 
int ucln(int a,int b)
{  
	while(a*b!=0)
	
	 if (a>b) a=a-b;
	 else b=b-a;
	 return a; 
}
class ps
{
	private:
	 int tu,mau;
	public:
	 ps(){
		tu=0;
	    mau=1; 	  
	} 
		ps(int t1,int m1)
		{tu=t1;
		 mau=m1; 
		 } 
    ~ps()
	{tu=0;
	mau=1; 
	 } 
	 
	 void nhap();
	 void in();
	 ps cong(ps p2);
    ps hieu(ps p2);
    ps tich(ps p2);
    ps thuong(ps p2);
    ps rutgon();
 } ;
void ps::nhap()
{    
	cout<<"Nhap tu so ";
	cin>>tu;
	do{
	
	
	  
	cout<<"Nhap mau so ";
	cin>>mau; 
} while (mau==0) ;
}
void ps::in()
{ 
 cout<<"Phan so la "<<tu<<"/"<<mau<<"\n";	
 } 
ps ps::cong(ps p2) 
{	ps tong;
		tong.tu=this->tu*p2.mau + p2.tu*mau;
		tong.mau =mau*p2.mau;
	return tong; 
}
ps ps::hieu(ps p2) 
{	ps tru;
		tru.tu=this->tu*p2.mau - p2.tu*mau;
		tru.mau =mau*p2.mau;
	return tru; 
}
ps ps::tich(ps p2) 
{	ps nhan;
		nhan.tu=this->tu*p2.tu;
		nhan.mau =mau*p2.mau;
		return nhan; 
}
 ps ps::rutgon()
 {	ps p1;
        if (tu<0)
		 
 		p1.tu =-abs(tu)/ucln(abs(tu),mau);
 		else p1.tu =abs(tu)/ucln(abs(tu),mau); 
 		p1.mau =mau/ucln(abs(tu),mau); 
 		return p1; 
 }

int main()
{   ps p1;
   ps p2;
//	ps t1(5,4) ;
//	ps t2(3,6) ;
	cout<<"Nhap ps thu nhat \n"; p1.nhap();
	cout<<"Phan so thu nhat la \n"; p1.in();
	cout<<"Nhap ps thu hai \n";p2.nhap();
	cout<<"Phan so thu hai la \n";p2.in();
	cout<<"Tong hai phan so chua rut gon ";p1.cong(p2).in() ;
	cout<<"Hieu hai phan so chua rut gon ";p1.hieu(p2).in() ;
	cout<<"Tich hai phan so chua rut gon ";p1.tich(p2).in() ;
	cout<<"Tong hai phan so  rut gon ";p1.cong(p2).rutgon().in() ;
	cout<<"Hieu hai phan so  rut gon ";p1.hieu(p2).rutgon().in() ;
	cout<<"Tich hai phan so  rut gon ";p1.tich(p2).rutgon().in() ;
	getch();
 
	
	
 } 

