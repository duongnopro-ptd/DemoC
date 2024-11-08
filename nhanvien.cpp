#include <iostream>
#include <conio.h>
#include<cstring> 
using namespace std;
class nhanvien
{
	private:
	 string hoten,chuc,gioitinh,que;
	 int ns,namvao,sonam;
	public:
	  friend istream &operator >>(istream &is,nhanvien &t) ;
	  friend ostream &operator <<(ostream &os,nhanvien t) ;
	void kt(nhanvien);
	 void kt2(nhanvien x,char v); 
	
 };
 istream &operator >>(istream &is,nhanvien &t)
 {
 	cin.ignore();
	cout<<"Nhap ten: ";
	getline(is, t.hoten) ;
//	cin.ignore();
	cout<<"Nhap chuc vu: ";
	getline(is, t.chuc) ;
//	cin.ignore();
	cout<<"Nhap gioi tinh: ";
	getline(is, t.gioitinh);
//	 cin.ignore();
	 cout<<"Nhap nam sinh:";
	 is>>t.ns;
	 cin.ignore();
	 cout<<"Nhap que quan:" ;
	 getline(is, t.que);
	 cout<<"Nhap nam vao: ";
	 is>>t.namvao;
	 t.sonam=2024-t.namvao; 
	 
 }
 ostream &operator <<(ostream &os,nhanvien t)
 {
 	os<<t.hoten<<" "<<t.chuc<<" "<<t.gioitinh<<" "<<t.ns<<" "<<t.que<<" "<<t.namvao<<endl;
	  
 }
 void nhanvien::kt(nhanvien m)
 {if (m.sonam>20)
  cout<<m; 
  } 
  void nhanvien::kt2(nhanvien x,char v)
  {if (strcmp(x.hoten,v) ==0)
  cout<<x;
  else cout<<"Khong co" ;
  }
 int main()
 {	int n; 
 	cout<<"Nhap so luong nhan vien :";
 	cin>>n; 
 	nhanvien a[n] ;
 	for (int i=0;i<n;i++) 
 	{
	 cout<<"Nhap thong tin nhan vien thu: "<<i+1<<endl; 
 	cin>>a[i];
 }
  cout<<"Xuat thong tin:"<<endl;
	 for (int i=0;i<n;i++)
	 {
	 
	 cout<<a[i];
	  
}
	cout<<"Thong tin nguoi lam tren 20 nam :"<<endl ;
	for (int i=0;i<n;i++)
	{
		a[i].kt(a[i]); 
	 }
	 string nguoi; 
	 cin.ignore(); 
	cout<<"Nhap thong tin can tim:";
	getline(cin, nguoi) ;
	for (int i=0;i<n;i++) 
	a[i].kt2(a[i], nguoi); 
	 
getch() ;
  } 
