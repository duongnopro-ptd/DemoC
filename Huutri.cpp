#include<bits/stdc++.h>
#include<conio.h> 
using namespace std;
class nv{
	protected:
	 string ht,cv,gt,dc;
	 int ns,tuoi,nvl,nl;
	public:
	 friend istream &operator >>(istream &is,nv &a);
	 friend ostream &operator <<(ostream &os,nv a);
	 void huu(nv m){
	 if ((m.gt=="nam" && m.tuoi>=60)||(m.gt=="nu" && m.tuoi>=55))
	  cout<<m;
	
	 } 
	 void ds20(nv m){
	 	if (m.nl>=20)
		 cout<<m;  
	 }
	friend void namm(nv m[],int n)
	 {  
	 int max=m[0].tuoi;
	 for (int i=1;i<n;i++)
	 if  (m[i].tuoi>max) max=m[i].tuoi;
	for (int i=0;i<n;i++)
	if (m[i].tuoi==max)
	cout<<m[i]; 
	  } 
	 friend void nuu(nv m[],int n)
	 {  
	 int min=m[0].tuoi;
	 for (int i=1;i<n;i++)
	 if  (m[i].tuoi<min) min=m[i].tuoi;
	for (int i=0;i<n;i++)
	if (m[i].tuoi==min)
	cout<<m[i]; 
	  }
	 friend void sxn(nv m[],int n)
	  {
	  	for (int i=0;i<n-1;i++)
	  	 for (int j=i+1;j<n;j++) 
	  	 
	  	 {
		   
		  if (m[i].tuoi<m[j].tuoi)
		  {
		  	nv tg=m[i];
			  m[i]=m[j];
			  m[j]=tg; 
			}  
	   }}
	 void n(nv m){
	 	if (m.gt=="nam")
		 cout<<m; 
	 } 
}; 
	istream &operator >>(istream &is,nv &a)
	{
		is.ignore();
		cout<<"Nhap ho ten: ";
		getline(is, a.ht);
		cout<<"Nhap chuc vu: ";
		getline(is, a.cv);
		cout<<"Nhap gioi tinh: ";
		getline(is, a.gt);
		cout<<"Nhap dia chi: ";
		getline(is, a.dc);
		cout<<"Nhap nam sinh: ";
		is>>a.ns;
		cout<<"Nhap nam vao lam: ";
		is>>a.nvl; 
		
		
		
		a.tuoi=2024-a.ns; 
		a.nl=2024-a.nvl; 
		return is; 
	}
	ostream &operator <<(ostream &os,nv a)
	{
	
		os<<a.ht<<" "<<a.cv<<" "<<a.gt<<" "<<a.tuoi<<" "<<a.dc<<" "<<a.nl<<endl;
		return os; 
	}
	
	
int main()
	{int n; 
	cout<<"Nhap so nhan vien: ";
	cin>>n; 
	nv a[n];
	for (int i=0;i<n;i++)
	{cout<<"Nhap nhan vien thu "<<i+1<<endl;
	cin>>a[i]; 
	 } 
	 cout<<"Nhan vien du tuoi ve huu : "<<endl;
	 for (int i=0;i<n;i++)
	 a[i].huu(a[i]);
	 cout<<"Danh sach nhan vien lam tren 20 nam :"<<endl;
	  for (int i=0;i<n;i++)
	 a[i].ds20(a[i]);
	 cout<<"Nhan vien nam lon tuoi nhat la: ";
	
	 namm(a,n) ;
	  cout<<"Nhan vien nu it tuoi nhat la: ";
	  
	nuu(a,n) ;
	 sxn(a,n);
	 cout<<"danh sach sau sap xep: "<<endl;
	   for (int i=0;i<n;i++)
	   a[i].n(a[i]); 
	 getch(); 
	 }
	  
