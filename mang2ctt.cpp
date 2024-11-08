#include <conio.h>
#include <iostream>

using namespace std; 
class mang2c
{
	private:
	  	int n;
		int a[20][20];
	public:
	   mang2c()
	   {n=0;
	   a[n][n]=0; 
		  } 
		~mang2c()
	   {n=0;
	   a[n][n]=0; 
		  } 
		  mang2c(int n)
		  {this->n=n;
		   	
			   }
		friend istream &operator>>(istream &is,mang2c &t);
		friend ostream &operator<<(ostream &os,mang2c t);
		 mang2c operator +(mang2c u) ;
		  mang2c operator -(mang2c u) ;  
		   mang2c operator *(mang2c u) ;
} ;
	istream &operator>>(istream &is,mang2c &t)
	{	//	int i,j; 
		cout<<"Nhap bac cua ma tran: ";
		is>>t.n;
		 cout<<"Nhap cac phan tu cua ma tran:\n";
		 for (int i=0;i<t.n;i++)
		 {for (int j=0;j<t.n;j++)
		 {cout<<"Nhap phan tu:a["<<i+1<<","<<j+1<<"]=";
		 is>>t.a[i][j]; 
		  } 
		  } 
	}
 	ostream &operator<<(ostream &os,mang2c t)
 	{
 	//	int i,j;
		os<<"Ma tran vua nhap:\n";
		 for (int i=0;i<t.n;i++)
		 {
		 
		  	for (int j=0;j<t.n;j++)
		  	
			  
			 os<<t.a[i][j]<<" ";  
 		 
 		os<<"\n";
 		
	 }
	 
}
mang2c mang2c::operator +(mang2c u)
{
	mang2c sum;
	int i,j; 
	for (i=0;i<n;i++) 
	 for (j=0;j<n;j++)
	 {
	 sum.n=n; 
	sum.a[i][j]=a[i][j]+u.a[i][j] ;
}

	return sum; 
	
 }
  mang2c mang2c::operator -(mang2c u)
{
	mang2c h;
	int i,j; 
	for (i=0;i<n;i++) 
	 for (j=0;j<n;j++)
	 {
	 h.n=n; 
	h.a[i][j]=a[i][j]-u.a[i][j] ;
}

	return h; 
	
 } 
int main()
{
	mang2c m,n,p,q,r;
	cin>>m;
	cout<<m;
	cin>>n;
	cout<<n;
	p=m+n;
	q=m-n; 
	cout<<"Tong cua: "<<p; 
	cout<<"Hieu cua: "<<q; 
	getch() ;
	
 } 
