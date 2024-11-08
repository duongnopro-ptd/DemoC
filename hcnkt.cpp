#include <bits/stdc++.h>
using namespace std; 
class hv
{
	protected:
	 float c;
	public:
	 float dthv();
	  float cvhv(); 
	  void nhapv();
	  void xuatv();
	 
 }; 
class hcn:public hv {
	private:
	 float d;
	public:
		 float cvhcn();
	  float dthcn()	;
	  void nhaphcn();
	  void xuathcn();
	  void ktmax();
	  
	  void ktmin();
	 
	
};
float hv::cvhv()
{return c*4; 
 } 
 float hv::dthv() 
 {return c*c; 
 }
float hcn::cvhcn()
{return (d+c)*2; 
 } 
 float hcn::dthcn() 
 {return c*d; 
 } 
void hv::nhapv()	
{  do
{
 
	cout<<"Nhap canh:";
	cin>>c;
}
while (c<=0) ;
}
void hv::xuatv() 
{
	cout<<"Chieu dai canh la: "<<c<<endl;
//	cout<<"Chi vi :"<<cvhv(); 
	 
}
void hcn::nhaphcn() 
{
	nhapv();
	do
	{
	 
	cout<<"Nhap canh con lai: ";
	cin>>d;
}
 while (d<=0); 
}
void hcn::xuathcn()
{
	xuatv();
	cout<<"Chieu dai canh con lai la: "<< d<<endl; 
 } 

 
int main()
{	int n; 
	cin>>n;
	hcn a[15]; 
	for (int i=0;i<n;i++)
	 {cout<<"Nhap hinh chu nhat thu: "<<i+1<<endl;
	  a[i].nhaphcn(); 
	  } 
//	for (int i=0;i<n;i++)
//	{
//		cout<<"Thong tin hinh chu nhat thu "<<i+1<<endl;
//		a[i].xuathcn(); 
//	 } 
	 int max,min;
	
	 max=a[0].dthcn();
	 for (int i=1;i<n;i++)
	 if (a[i].dthcn() >max) max=a[i].dthcn();
	  min=a[0].dthcn();
	 for (int i=1;i<n;i++)
	 if (a[i].dthcn() <min) min=a[i].dthcn();
	 for (int i=0;i<n;i++)
	 if (a[i].dthcn()==max)
	 {
	 	cout<<"Hinh chu nhat "<<i+1<<" co dien tich lon nhat:"<<endl;
		 a[i].xuathcn();
		 cout<<"Dien tich la "<< a[i].dthcn()<<endl;
		  
	  } 
	 for (int i=0;i<n;i++)
	 if (a[i].dthcn()==min)
	 {
	 	cout<<"Hinh chu nhat "<<i+1<<" co dien tich nho nhat:"<<endl;
		 a[i].xuathcn();
		 cout<<"Dien tich la :"<< a[i].dthcn()<<endl;
		  
	  } 
	  
 } 
