#include <bits/stdc++.h>
using namespace std;
class nv
{
	 private: 
	  string ht,cv,gt,qq;
	  int ns,nvl;
	 public: 
	  friend istream &operator >>(istream &is,nv &a);
	  friend ostream &operator <<(ostream &os,nv a);
	  int sn()
	  {
	  	return 2024-nvl; 
	   } 
	   
 };
  istream &operator >>(istream &is,nv &a)
  { 
  is.ignore();
  cout<<"Nhap ho ten: ";
   getline(is, a.ht);
   cout<<"Nhap chuc vu: ";
   getline(is,a.cv);
   cout<<"Nhap gioi tinh: ";
   getline(is, a.gt);
   cout<<"Nhap que quan: ";
   getline(is, a.qq);
   cout<<"Nhap nam sinh: ";
   is>>a.ns;
   cout<<"Nhap nam vao lam: ";
   is>>a.nvl; 
   return is; 
  }
  ostream &operator <<(ostream &os,nv a)
  {
  	 cout<<"Hoten: "<<a.ht<<" "<<"Chuc vu: "<<a.cv<<endl;
	 cout<<"Gioi tinh: "<<a.gt<<" "<<"Que quan: "<<a.qq<<endl;
	 cout<<"Nam sinh: "<<a.ns<<" "<<"Nam vao lam: "<<a.nvl<<endl; 
  }
  void ktra(nv a[],int n)
  { 
  for (int i=0;i<n;i++)
  { if (a[i].sn()>=20)
   cout<<a[i]; 
   } 
   } 
int main()
{ 
 int n;
 cout<<"nhap so nhan vien: ";
 cin>>n;
 nv *a =new nv[n];
 for (int i=0;i<n;i++)
 {cout<<"Nhap nhan vien thu: "<<i+1<<endl;
  cin>>a[i];
   }
   cout<<"danh sach nhan vien lam tren 20 nam la: "<<endl;
   ktra(a,n);
   delete[] a; 
 } 
