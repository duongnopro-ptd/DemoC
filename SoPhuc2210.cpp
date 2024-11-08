#include <bits/stdc++.h>
using namespace std;
class sp1 {
	protected:
	 	int pt,pa;
	public:  
	  void setpt()
	  {
	  	this->pt=pt; 
	   } 
	   int getpt(int pt)
	   {
	   	return pt; 
		} 
	void setpa()
	{
		this->pa=pa; 
	 } 
	 int getpa(int pa)
	 {
	 	return pa; 
	  } 
	  int md()
	  {
	  	return sqrt(pow(pa,2)+pow(pt,2)) ;
	   } 
	  friend istream &operator >>(istream &is, sp1 &a);
	  friend ostream &operator <<(ostream &os, sp1 a);
	   
}; 
	istream &operator >>(istream &is,sp1 &a)
	{
		cout<<"Nhap phan thuc: ";
		is>>a.pt;
		cout<<"Nhap phan ao: ";
		is>>a.pa; 
		return is; 
		}
	ostream &operator <<(ostream &os,sp1 a)
	{
		if (a.pt==0)
		{os<<a.pa<<"*i"; 
		 } 
		 else 
		 {
		 	if (a.pa<0)
			  os<<a.pt<<a.pa<<"*i";
			  else if (a.pa>0) os<<a.pt<<"+"<<a.pa<<"*i";
			  else if (a.pa==0) os<<a.pt; 
		 }
		 return os; 
		}
class sp2:public sp1
{
	public: 
	 sp2 operator +(sp2 P);
	 sp2 operator -(sp2 P);
	 sp2 operator =(sp2 P);
	 bool operator >(sp2 P);
	 bool operator <(sp2 P); 
	};
	sp2 sp2::operator +(sp2 P)
	{
		sp2 kq;
		kq.pt=pt+P.pt;
		kq.pa=pa+P.pa; 
		return kq; 
		 } 	
	sp2 sp2::operator -(sp2 P)
	{
		sp2 kq;
		kq.pt=pt-P.pt;
		kq.pa=pa-P.pa; 
		return kq; 
		 }
	 sp2 sp2::operator =(sp2 P)
	 {
	 	this->pt=P.pt;
		this->pa=P.pa;
		return *this; 
		
	   }  
	bool sp2::operator >(sp2 P)
	{
		return md()>P.md(); 
		}  
	bool sp2::operator <(sp2 P)
	{ return md()<P.md(); 
		   } 
	void sx(sp2 a[],int n)
	{
		for (int i=0;i<n-1;i++)
			for (int j=i+1;j<n;j++)
			 if (a[i]<a[j]) //toan tu so sanh be 
			{
				sp2 tg=a[i];
				a[i]=a[j];
				a[j]=tg;  //toan tu gan 
			 } 
	 } 
int main()
{ int n;
 do{
 
	cout<<"Nhap so so phuc: ";
	cin>>n;
 }  while (n<=0 || n>10);
  sp2 a[n]; 
  for (int i=0;i<n;i++)
   {
   	cout<<"Nhap so phuc thu: "<<i+1<<endl;
	   cin>>a[i]; 
	} 
	sx(a,n);
	
	 cout<<"danh sach so phuc sau sap xep la: "<<endl;
	 for (int i=0;i<n;i++)
	 {
	 
	 cout<<a[i];
	 cout<<"\n" ;
 }
	  cout<<"\nSo phuc lon nhat la:";
	  cout<<a[0]; 
   sp2 tong=a[0]+a[1];
   sp2 hieu=a[0]-a[1];
   cout<<"\n"<<tong<<" "<<hieu; 
 } 

