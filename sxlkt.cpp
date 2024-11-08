#include<bits/stdc++.h>
using namespace std;
class nhan{
	protected:
	 	string mnv,ht;
		 int ns;
	public:
	 void nhap();
	 void xuat();
	  
}; 
class cb:public nhan{
	private:
	 int lcb,hsl,luong; 
	public:
	 void nhapcb();
	 void xuatcb();
	friend void sxl(cb a[],int n); 
}; 
void nhan::nhap()
{
	cin.ignore();
	cout<<"Nhap ma nhan vien :";
		getline (cin, mnv);
	cout<<"Nhap ho ten :";
		getline(cin, ht);
	cout<<"Nhap nam sinh: ";
	cin>>ns; 
 } 
void nhan::xuat()
{
	cout<<mnv<<" "<<ht<<" "<<ns<<" "; 
 }
void cb::nhapcb()
{
	nhap();
	cout<<"Nhap luong co ban ";
	cin>>lcb;
	cout<<"Nhap he so luong: ";
	cin>>hsl;
	 luong=lcb*hsl; 
 } 
void cb::xuatcb()
{
	xuat();
	cout<<lcb<<"  "<<hsl<<" "<<luong<<endl; 
 } 
void sxl(cb a[],int n)
{		cb tg; 
		for (int i=0;i<n-1;i++)	
			for (int j=i+1;j<n;j++) 
			  if (a[i].luong<a[j].luong)
			  {
			  	tg=a[i];
				 a[i]=a[j];
				 a[j]=tg; 
			   } 
	
 } 
int main()
{
	int n;
	cin>>n;
	cb a[15];
	for (int i=0;i<n;i++) 
	{cout<<"Nhap thong tin can bo thu"<<i+1<<endl;
	 a[i].nhapcb(); 
	 
	}
	sxl(a,n);
	cout<<"Danh sach can bo da sap xep:"<<endl;
	for (int i=0;i<n;i++) 
	a[i].xuatcb(); 
	
 } 
