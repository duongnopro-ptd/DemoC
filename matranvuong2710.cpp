#include <bits/stdc++.h>
using namespace std;
class mt
{	private: 
		int bac;
		int a[100][100];
	public:
	  void nhap();
	  void xuat();
	 int tc();
	 int tp(); 
	   
 };
 void mt::nhap() 
 { 
 cout<<"Nhap bac cua ma tran :";
 cin>>bac;
 //a=new int [bac+1][bac+1];
  for (int i=0;i<bac;i++)
   for (int j=0;j<bac;j++)
    
	{ 
	  cout<<"Nhap phan tu thu ["<<i+1<<";"<<j+1<<"]: ";
	  cin>>a[i][j]; 
	 } 
	 
 }
 void mt::xuat() 
 {
 	 for (int i=0;i<bac;i++)
	  {  for (int j=0;j<bac;j++)
	  {
	  	 cout<<a[i][j]<<" ";
		   
	   } 
	   cout<<endl; 
	   } 
	   
 }
 int mt::tc() 
 { int tong=0; 
 	for (int i=0;i<bac;i++) 
 	tong=tong+a[i][i];
 	return tong; 
 }
 int mt::tp() 
 { 
 int tong=0;
 for (int i=0;i<bac;i++)
  tong=tong+a[i][bac-1-i];
  return tong; 
 }
 int main()
 { 
 mt a; 
 cout<<"Nhap ma tran: "<<endl;
 a.nhap();
 cout<<"In ma tran: "<<endl;
 a.xuat();
 cout<<"Tong duong cheo chinh: "<<a.tc()<<endl;
 cout<<"Tong duong cheo phu : "<<a.tp()<<endl;
  
  } 
