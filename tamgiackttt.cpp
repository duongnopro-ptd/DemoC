#include <iostream>
#include <conio.h>
#include<cmath> 
using namespace std;
 
class diem
{
	private:
	 int x,y;
	public:
	 diem()
	 {x=0;  y=0; 
	   } 
	  diem(int x,int y)
	  {this->x=x;
	   this->y=y;
	   } 
	   void nhapd();
	   void xuatd();
	   float kc(diem d1,diem d2);
};
class tamgiac:public diem
{ 
  private:
   diem d1,d2,d3; 
 
	public:
	 void nhaptg();
	 void xuattg();
	 void kt();
	 float cv();
	 float dt();  
 } ;
void diem::nhapd() 
{
	cout<<"Nhap x :";
	 cin>>x;
	cout<<"Nhap y :";
	 cin>>y;
}
void diem::xuatd() 
{
	cout<<"("<<x<<";"<<y<<")"; 
}
float diem::kc(diem d1,diem d2)
{
	return sqrt((d2.x-d1.x)*(d2.x-d1.x)+(d2.y-d1.y)*(d2.y-d1.y)); 
 } 
void tamgiac::nhaptg() 
{
	 
	cout<<"Nhap toa do t1:"<<endl; 	d1.nhapd() ;
	cout<<"Nhap toa do t2:"<<endl;  d2.nhapd(); 
	cout<<"Nhap toa do t3:"<<endl; d3.nhapd(); 
	
}
void tamgiac::xuattg()
{

	cout<<"A"; d1.xuatd(); 
	
	cout<<"\nB";
	d2.xuatd();
	cout<<"\nC";
	d3.xuatd();
	 	
} 
void tamgiac::kt() 
{
	float a,b,c;
	a=kc(d1,d2);
	b=kc(d2,d3);
	c=kc(d3,d1);
	if ((a>0) &&(b>0)&&(c>0)&&(a+b>c)&&(b+c>a)&&(a+c>b))
	{
		cout<<"La tam giac ";
		if ((a==b)&&(a==c)&&(b==c))
		cout<<"Deu";
			else if ((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b))
			 cout<<"Vuong";
			  else if ((a==b)||(a==c)||(b==c))
			   cout<<"Can";
			    else cout<<"Tam giac thuong";
				 
	 } 
	 else cout<<"Khong tao thanh tam giac:";
	  
}
float tamgiac::dt()
{	float a,b,c;
	a=kc(d1,d2);
	b=kc(d2,d3);
	c=kc(d3,d1);
	float p=(a+c+b)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c)) ;
	
 } 
float tamgiac::cv() 
{float a,b,c;
	a=kc(d1,d2);
	b=kc(d2,d3);
	c=kc(d3,d1);
	return a+b+c; 
	
}
int main()
{	int n;
 cin>>n; 
	tamgiac t[10];
	for (int i=0;i<n;i++)
	{cout<<"Nhap tam giac thu "<<i+1<<endl;
		 t[i].nhaptg(); 
	 }
 
	for (int i=0;i<n;i++)
	{cout<<"Xuat tam giac thu "<<i+1<<endl; 
	  
	t[i].xuattg();
 t[i].kt(); 
	cout<<"\nDien tich tam giac:"<<t[i].dt();
	cout<<"\nChu vi tam giac:"<<t[i].cv(); 
 }
	//t1.kt();
	
	getch() ;
 } 
