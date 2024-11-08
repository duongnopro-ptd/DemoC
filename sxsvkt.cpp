#include <iostream>
#include<cstring>
#include<conio.h>
#include <bits/stdc++.h> 
using namespace std;
class nguoi{
	protected:
	 string hoten;
	 int ns;
	  
}; 
class sv:public nguoi{
	private:
	 string msv;
	 float dtb;
	public:
	 void nhap();
	 void xuat();
	 friend void sx(sv a[],int n);
	 friend void kt(const sv&m,const string& c);
	
}; 
void sv::nhap()
{
	cin.ignore() ;
	cout<<"Nhap ho ten: ";
		getline(cin, hoten);
	cout<<"Nhap nam sinh: ";
	    cin>>ns;
	cin.ignore() ;
	cout<<"Nhap ma sinh vien :";
		getline(cin, msv);
	cout<<"Nhap diem trung binh :";
		cin>>dtb; 
 } 
void sv::xuat()
{
	cout<<hoten<<" "<<ns<<" "<<msv<<" "<<dtb<<endl; 
 } 
void sx(sv a[],int n)
{
	sv tg;
	 for (int i=0;i<n-1;i++)
	  	for (int j=i+1;j<n;j++)
		   if (a[i].dtb<a[j].dtb)
		    {
		    	tg=a[i];
				a[i]=a[j];
				a[j]=tg; 
			 } 
}
void kt(const sv m ,string& c)
{
 
	 	if (m.hoten==c) 
	cout<<m.hoten<<" "<<m.ns<<" "<<m.msv<<" "<<m.dtb<<endl; 
	//	 else cout<<"Khong co thong tin"; 
	  	
 } 
int main()
{
	int n;
	cin>>n;
	sv a[15];
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<endl;
		a[i].nhap();
		 
	 } 
	for (int i=0;i<n;i++)
	{
		cout<<"Xuat thong tin sinh vien thu "<<i+1<<endl;
		a[i].xuat();
		 
	 } 
	  sx(a,n);
	 cout<<"Danh sach sinh vien sau khi sap xep:"<<endl;
	 for (int i=0;i<n;i++)
	 a[i].xuat(); 
	  string ten;
	  cin.ignore() ;
	  getline(cin, ten) ;
	  for (int i=0;i<n;i++) 
	   kt(a[i],ten); 
	   
 } 
 
