#include<bits/stdc++.h>
using namespace std;
class mang1c
{
	 private:
	  int n;
	  int a[20];
	 public:
	  friend istream &operator >>(istream &is,mang1c &t);
	  friend ostream &operator <<(ostream &os,mang1c t); 
	  double tb()
	  {
	  	float tong=0.0;
		  int d=0;
		   for (int i=0;i<n;i++)
		   if (a[i]<0)
		   
		   {
		   	tong=tong+a[i];
			   d=d+1; 
			} 
			return tong/d; 
	   } 
	   int max()
	   {
	   	int maxx=a[0];
		   for (int i=1;i<n;i++) 
		    if (maxx<a[i]) maxx=a[i];
			return maxx ;
		} 
 }; 
 istream &operator >>(istream &is,mang1c &t)
 {
 	cout<<"Nhap bac cua mang: ";
	 is>>t.n;
	 for (int i=0;i<t.n;i++)
	 {
	 	cout<<"Nhap phan tu thu "<<i+1<<":";
		 is>>t.a[i]; 
	   }  
	   return is; 
 }
 ostream &operator <<(ostream &os,mang1c t) 
 {
 	 for (int i=0;i<t.n;i++)
 	os<<t.a[i]<<" "; 
 	return os; 
 }
 int main()
 {
 	mang1c v;
	cin>>v;
//	cout<<v; 
	cout<<v.tb()<<endl ;
	cout<<v.max(); 
  } 
