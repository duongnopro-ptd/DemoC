#include<bits/stdc++.h> 
#include <iostream>
#include <stdio.h>
using namespace std; 
class hcn 
{ private:
     float cd,cr;
  public:
     hcn(float cd,float cr)
	 {
	 	this->cd=cd;
		this->cr=cr; 
		}
		hcn(){
			
		} 
	void nhap();
	void inp();
	 float dientich();
	 float  chuvi(); 
};
 void hcn::nhap()
 {
 	cout<<"Nhap chieu dai :";
		cin>>cd;
	cout<<"Nhap chieu rong :";
	    cin>>cr;
	 
}
void hcn::inp()
{ if (cd==0 ||cr ==0)
 cout<<"Khong hop le"<<"\n";
 else 
 {
 
	if (cd!=cr)
	
	{ cout<<"La hinh chu nhat co :"<<"\n"; 
	 cout<<"Chieu dai hinh chug nhat la:"<<cd<<"\n";
	  cout<<"Chieu rong hinh chu nhat la:"<<cr<<"\n"; 
	 } 
	 else 
	 {
	 cout<<"La hinh vuong co "<<"\n" ;
	  cout<<"Do dai canh hinh vuong la: "<<cd<<"\n";

}
 cout<<"Dien tich hinh vua nhap "<<dientich()<<"\n";
 cout<<"Chu vi hinh vua nhap " <<chuvi() <<"\n";
 } 
}
float hcn::dientich()
{
	return cd*cr; 
 } 
 float hcn::chuvi()
 {return (cd+cr)*2 ;
  } 
int main()
{
	int i,n;
	cin>>n;
	hcn a[100]; 
	for (i=0;i<n;i++) 
	{cout<<"Nhap hinh vuong thu "<<i+1<<"\n";
	 a[i].nhap(); 
	}
	for (i=0;i<n;i++)
	{cout<<"Thong tin vua nhap hinh thu :"<<i+1<<"\n";
	 a[i].inp(); 
	 } 
 } 
