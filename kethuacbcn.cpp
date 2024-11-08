#include<bits/stdc++.h>
using namespace std;
class ns{
	protected:
	 string  mnv,ht;
	 int date;
	public:
	 void nhap();
	 void xuat();  	 
}; 
class cb:public ns{
	private:
		int lcb,hsl,luong;
	public:
	 void nhapcb();
	 void xuatcb();
	 friend void sxcb(cb a[],int n)
	 {	cb tg; 
	 	 for (int i=0;i<n;i++)
		  { for (int j=i+1;j<n;j++)
		     if (a[i].luong<a[j].luong)
			 {tg=a[i];
			 a[i]=a[j];
			 a[j]=tg; 
			  } 
		   } 
	 }
	  
}; 
class cn:public ns{
	private:
	 int ngay;
	public:
	 void nhapcn();
	 void xuatcn();
	  float tienthuong(){
	  	//cn tien; 
	if (ngay>26) return (ngay-26)*100000; 
	  } 
	  void xuattcn(cn m); 
}; 
void ns::nhap()
{
	cin.ignore();
	cout<<"Nhap ma nhan vien: ";
		getline(cin, mnv);
	cout<<"Nhap ho ten : ";
		getline(cin, ht);
	cout<<"Nhap nam sinh: ";
		cin>>date; 
 } 
void cb::nhapcb()
{
	nhap();
	cout<<"Nhap luong co ban: ";
	cin>>lcb;
	cout<<"Nhap he so luong: ";
	cin>>hsl; 
	luong=lcb*hsl; 
 } 
 void cn::nhapcn()
 { nhap();
  cout<<"Nhap ngay cong: ";
  cin>>ngay; 
  } 
  void ns::xuat()
  {
  	cout<<mnv<<" "<<ht<<" "<<date<<" "; 
   } 
   void cb::xuatcb()
   {
   	xuat();
	  cout<<luong;  
	} 
	void cn::xuatcn(){
	
	 xuat();
	 cout<<tienthuong();
	}
	void cn::xuattcn(cn m)
	{
		if (m.ngay>26)
		m.xuatcn(); 
	 } 
int main()
{	int n;
	cin>>n; 
    cb a[30];
	cn  b[30]; 
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap can bo thu"<<i+1<<endl;
		a[i].nhapcb();
	 } 
  /*for (int i=0;i<n;i++)
  {cout<<"Xuat can bo thu "<<i+1<<endl;
  a[i].xuatcb(); 
	  }	*/
	sxcb(a,n);
	cout<<"Danh sach sau sap xep la:"<<endl; 
	for (int i=0;i<n;i++)
	{
	
	a[i].xuatcb();
	cout<<"\n" ;
}
		for (int i=0;i<n;i++)
	{
		cout<<"Nhap cong nhan thu"<<i+1<<endl;
		b[i].nhapcn();
	 } 
	 cout<<"Danh sach cong nhan co tien thuong: "<<endl;
	 	for (int i=0;i<n;i++)
	{
	
	b[i].xuattcn(b[i]);
	cout<<"\n"; 
}	
 } 
