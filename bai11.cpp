#include<bits/stdc++.h>
using namespace std;
class nguoi{
	protected:
	 string ht;
	 int ns;
	void nhap()
	{
		cin.ignore();
		cout<<"Nhap ho ten: ";
		getline(cin, ht);
		cout<<"Nhap nam sinh: ";
		cin>>ns; 
	 }
	 void in()
	 {
	 	cout<<ht<<" "<<ns<<" "; 
	  } 
}; 
class sv:public nguoi{
	private:
	  string msv;
	  float dtb;
	public:
	 void nhapsv()
	 {
	 	nhap();
		 cin.ignore();
		 cout<<"Nhap ma sinh vien: ";
		 getline(cin, msv) ;
		 cout<<"Nhap diem trung binh: ";
		 cin>>dtb;
		 
	  } 
	  void insv()
	  {
	  	cout<<msv<<" "<<dtb<<endl; 
	   } 
	   friend void sxt(sv a[],int n) 
	   {
	   	for (int i=0;i<n-1;i++)
		   for (j=i+1) 
	   }
}; 
class gv:public nguoi{
	private:
	 string bm,mgd;
	 int sbb;
	public:
	 void nhapgv()
	 {
	 	nhap();
		 cin.ignore() ;
		 cout<<"Nhap bo mon cong tac: ";
		 getline(cin,bm);
		 cout<<"Nhap mon giang day: ";
		 getline(cin, mgd);
		 cout<<"Nhap so bai bao: ";
		 cin>>sbb;
	}
	void ingv()
	{
		in();
		cout<<bm<<" "<<mgd<<" "<<sbb<<endl; 
	 } 
		  
		 
		  
	   
}; 
int main()
{
	int n ,m;
	cout<<"Nhap so hoc sinh: ";
	cin>>n;
	cout<<"Nhap so giang vien : ";
	cin>>m;
	sv a[n];
	gv b[m];
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin sinh vien thu "<<i+1<<endl;
		a[n].nhapsv(); 
	 } 
	 for (int i=0;i<m;i++)
	{
		cout<<"Nhap thong tin giang vien thu "<<i+1<<endl;
		b[m].nhapgv(); 
	 } 
 } 
