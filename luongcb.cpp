#include<bits/stdc++.h>
using namespace std;
class canbo{
	protected:
	 string mcb,mdv,ht;
	 int ns;
	public:
		void nhapcb();
		void xuatcb(); 
	
}; 
class luong : public canbo{
	private:
	 float pc,hsl,bh;
	 long long luong2; 
	 public:
	void nhapl();
    	void xuatl();
    	void kt(luong m); 
}; 
void canbo::nhapcb()
{
	cin.ignore() ;
	cout<<"Nhap ma can bo:";
	getline(cin, mcb);
	cout<<"Nhap ma don vi:";
	getline(cin, mdv);
	cout<<"Nhap ho ten:";
	getline(cin, ht);
	cout<<"Nhap nam sinh:";
	cin>>ns; 
 } 
void canbo::xuatcb()
{
	cout<<mcb<<" "<<mdv<<" "<<ht<<" "<<ns<<" ";
}

void luong::nhapl() 
{	nhapcb() ;
	cout<<"Nhap phu cap:";
	cin>>pc;
	cout<<"Nhap he so luong:";
	cin>>hsl;
	cout<<"Nhap bao hiem :";
	cin>>bh;
	luong2=hsl*390000+pc-bh; 
}
void luong::xuatl()
{
	xuatcb();
	cout<<luong2<<endl; 
 } 
void luong::kt(luong m)
{
	if (m.luong2>2000000)
	m.xuatl() ;
 } 

 int main()
 {
 	int n;
	 cin>>n;
	 luong a[20] ;
	
	 for (int i=0;i<n;i++) 
	 {	cout <<"Nhap can bo thu "<<i+1<<endl;
	     
		 a[i].nhapl(); 
	}
	for (int i=0;i<n;i++) 
	{
		cout<<"Xuat thong tin can bo thu "<<i+1<<endl;
		a[i].xuatl(); 
	}
	cout<<"Nhung nguoi luong tren 2 trieu :"<<endl;
	for (int i=0;i<n;i++)
		{a[i].kt(a[i]) ;
	 } 
  } 
