#include<bits/stdc++.h>
using namespace std;
class mt{
	private:
	 int n;
	 int a[15][15];
	public:
	 mt()
	 {
	 	n=0;
		a[n][n]=0; 
	  } 
	 ~ mt()
	 {
	 	n=0;
		a[n][n]=0; 
	  }
	  friend istream &operator >>(istream &is,mt &t);
	  friend ostream &operator <<(ostream &os,mt t);
	  mt operator +(mt u);
	  mt operator -(mt u); 
	  mt operator *(mt u);  
}; 
	istream &operator >>(istream &is,mt &t)
	{
		cout<<"Nhap bac cua ma tran:";
		is>>t.n;
		cout<<"Nhap phan tu cua ma tran:"<<endl;
		for (int i=0;i<t.n;i++)
		 for (int j=0;j<t.n;j++) 
		 {
		 
			cout<<"Nhap phan tu thu "<<"a["<<i+1<<";"<<j+1<<"]:";
			is>>t.a[i][j]; 
		 } 
		}
		ostream &operator <<(ostream &os,mt t)
		{	os<<"Ma tran vua nhap la:"<<endl; 
			for (int i=0;i<t.n;i++)
			{for (int j=0;j<t.n;j++) 
			os<<t.a[i][j]<<" "; 
			os<<"\n"; 
			}
			
			}
	mt mt::operator +(mt u)
	{
		mt sum;
	 	 
	for (int i=0;i<n;i++) 
	 for (int j=0;j<n;j++)
	 {
	 sum.n=n; 
	sum.a[i][j]=a[i][j]+u.a[i][j] ;
		 }
		 return sum;
	}
	mt mt::operator -(mt u)
	{
		mt hieu;
	 	 
	for (int i=0;i<n;i++) 
	 for (int j=0;j<n;j++)
	 {
	 hieu.n=n; 
	hieu.a[i][j]=a[i][j]-u.a[i][j] ;
		 }
		 return hieu;
	}
	
	int main()
	{
		
		mt v,n,m,p;
		cout<<"Nhap ma tran thu nhat:"<<endl; 
		cin>>v;
		cout<<v; 
		cout<<"Nhap ma tran thu hai:"<<endl;
		cin>>n;
		cout<<n;
		m=v+n;
		p=v-n;
		cout<<"\n"<<m;
		cout<<"\n"<<p; 
	 } 
	
