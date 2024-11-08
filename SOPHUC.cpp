#include <math.h>
#include <iostream>
#include<conio.h>
using namespace std;
class sophuc
{
	private:
	 float pt,pa;
	public:
	 sophuc()
	 {
	 	pt=1;
		pa=0; 
	  } 
	  sophuc(int a,int b)
	  {
	  	pt=a;
		pa=b; 
	   } 
	   ~sophuc() 
	  {
	  	pt=1;
		pa=0; 
      }
      void nhap();
	  void inp();
	  sophuc tong(sophuc t2) ;
	  sophuc hieu(sophuc t2);
	  sophuc tich(sophuc t2) ;
	  sophuc thuong(sophuc t2) ;
} ;
void sophuc::nhap()
{
	cout<<"Nhap phan thuc ";
	cin>>pt;
	cout<<"Nhap phan ao ";
	cin>>pa;
}
void sophuc::inp() 
{
	cout<<pt<<"+"<<pa<<"i"; 
}
sophuc sophuc::tong(sophuc t2) 
{	sophuc cong;
		cong.pt=pt+t2.pt ;
		cong.pa =pa+t2.pa;
	return cong; 
}
sophuc sophuc::hieu(sophuc t2) 
{	sophuc tru;
		tru.pt=pt-t2.pt ;
		tru.pa =pa-t2.pa;
	return tru; 
}
sophuc sophuc::tich(sophuc t2)
{ 	sophuc nhan;
  
 		 nhan.pt=(this->pt*t2.pt - this->pa*t2.pa ) ;
 		 nhan.pa=(this->pt*t2.pa +this->pa*t2.pt);
 	return nhan; 
} 
sophuc sophuc::thuong(sophuc t2) 
{	sophuc chia;
		chia.pt = (float)(this->pt*t2.pt + this->pa*t2.pa )/(t2.pt*t2.pt+t2.pa*t2.pa);
	 chia.pa = (float)(this->pa*t2.pt - this->pt*t2.pa )/(t2.pt*t2.pt+t2.pa*t2.pa);
	return chia; 
 } 

int main()
{
	sophuc t1;
	sophuc t2;
	cout<<"Nhap so thu nhat:\n";t1.nhap() ;
	t1.inp();
	cout<<"\nNhap so phuc thu hai:\n";t2.nhap();
	t2.inp();
	cout<<"\nTong hai so phuc: ";t1.tong(t2).inp();  
	cout<<"\nHieu hai so phuc: ";t1.hieu(t2).inp(); 
	cout<<"\nTich hai so phuc: ";t1.tich(t2).inp();  
	cout<<"\nThuong hai so phuc: ";t1.thuong(t2).inp();  
	getch() ;
 } 
