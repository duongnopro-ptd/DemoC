#include<bits/stdc++.h>
using namespace std;
class sv{
	protected:
		 string msv,ht,gt;
		 int ns;
		 float dtb;
	public:
	   sv()
	   {
	   	ns=25; 
		} 
	void nhap();
	void xuat(); 
	 
}; 
class svhttt:public sv{
	protected:
	  int hp;
	public:
	svhttt()
	{hp=1000000; 
	 } 
	 void nhaphttt();
	 void xuathttt(); 
	 void kt(svhttt m)
	 {
	 	if (m.gt=="nu" && m.dtb>=6.5)
	 	m.xuathttt(); 
		  
	  } 
}; 
class svutt:public sv{
	private:
	 string dv;
	 int luong;
	public:
	 void nhaputt();
	 void xuatutt();
	  
}; 
void sv::nhap()
{
	cin.ignore() ;
	cout<<"Nhap ma sinh vien:";
	getline(cin, msv);
	cout<<"Nhap ho ten: ";
	getline(cin, ht);
	cout<<"Nhap ngay sinh:";
	cin>>ns;
	cin.ignore(); 
	cout<<"Nhap gioi tinh:";
	getline(cin, gt);
	cout<<"Nhap diem trung binh:";
	cin>>dtb; 
 } 
 void svhttt::nhaphttt()
 { nhap();
  cout<<"Nhap hoc phi:";
  cin>>hp; 
  } 
  void svutt::nhaputt()
  {nhap();
   cout<<"Nhap don vi:";
   getline(cin, dv);
   cout<<"Nhap luong:";
   cin>>luong; 
   } 
void sv::xuat() 
{ cout<<msv<<" "<<ht<<" "<<ns<<" "<<gt<<" "<<dtb<<" "; 
}
void svhttt::xuathttt()
{
	xuat();
	cout<<hp<<endl;
 } 
 void svutt::xuatutt()
 {
 	xuat();
	 cout<<dv<<" "<<luong<<endl;
	 
  } 
 int main()
 {
 
	 int n;
	 cin>>n ;
		svhttt a[n+1]; 
		for (int i=0;i<n;i++)
		{cout<<"Nhap thong tin svhttt thu "<<i+1<<endl;
		a[i].nhaphttt(); 
		 } 
		 	for (int i=0;i<n;i++)
		{cout<<"Xuat thong tin svhttt thu "<<i+1<<endl;
		a[i].xuathttt(); 
		 } 
		 cout<<"Danh sach sinh vien can in:"<<endl;
		  
		 for (int i=0;i<n;i++) 
		  a[i].kt(a[i]); 
  } 
