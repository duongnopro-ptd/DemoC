#include<bits/stdc++.h>
using namespace std;
class nguoi{
	protected:
	 string ht,qq;
	 int ns;
	 
}; 
class cbnv:public nguoi{
	private: 
	 int lc,thuong,phat,ltl;
	public:
	 void nhap();
	 void xuat();
	  
}; 
void cbnv::nhap() 
{	cin.ignore(); 
	cout<<"Nhap ho ten:";
	getline(cin,ht);
	cout<<"Nhap que quan:";
	getline(cin, qq);
	cout<<"Nhap nam sinh:";
	cin>>ns;
	cout<<"Nhap luong cung:";
	cin>>lc;
	cout<<"Nhap tien thuong:";
	cin>>thuong;
	cout<<"Nhap tien phat:";
	cin>>phat;
	ltl=lc+thuong-phat; 
}
void cbnv::xuat()
{
	cout<<ht<<" "<<qq<<" "<<ns<<" "<<ltl<<endl; 
 } 
int main()
{
	int n;
	cin>>n;
	cbnv a[n+1];
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin thu "<<i+1<<endl;
		a[i].nhap() ;
	 }
	for (int i=0;i<n;i++)
	{
		cout<<"Xuat thong tin thu "<<i+1<<endl;
		a[i].xuat() ;
	 }  
 } 
