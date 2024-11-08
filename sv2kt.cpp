#include <bits/stdc++.h>
using namespace std;
class mh{
	protected:
		string tmh;
		float dcc,dkt,dt,dtb;
	 
}; 
class sv:public mh{
	private:
	 string ht,lop,msv; 
	public:
	 void nhap();
	 void xuat(); 
	 void svtl(sv m);
	 void svct(sv m); 
}; 
void sv::nhap() 
{
	cin.ignore() ;
	cout<<"Nhap ten sinh vien:";
	getline(cin, ht);
	cout<<"Nhap lop:";
	getline(cin, lop);
	cout<<"Nhap ma sinh vien :";
	getline(cin, msv);
	cout<<"Nhap ten mon hoc: ";
	getline(cin, tmh) ;
	cout<<"Nhap diem cc:";cin>>dcc;
	 	cout<<"Nhap diem kt:";cin>>dkt;
	 			cout<<"Nhap diem thi:";cin>>dt;
	 	dtb=0.1*dcc+0.3*dkt+0.7*dt; 
}
void sv::xuat() {
	cout<<ht<<" "<<msv<<" "<<lop<<" "<<tmh<<" "<<dtb<<endl; 
}
void sv::svtl(sv m)
{
	if (m.dtb<4)
	m.xuat(); 
 }
 void sv::svct(sv m) 
 {
 	if (m.dcc<5||m.dkt==0)
	 m.xuat() ;
 }
int main()
{
	sv a[30];
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin sinh vien thu"<<i+1<<endl;
		a[i].nhap();
		 
	 } 
	cout<<"Danh sach sinh vien thi lai:"<<endl;
	 	for (int i=0;i<n;i++)
	 	a[i].svtl(a[i]);
	cout<<"Danh sach sinh vien cam thi:"<<endl;
	 for (int i=0;i<n;i++)
	 	a[i].svct(a[i]);
	
 } 
