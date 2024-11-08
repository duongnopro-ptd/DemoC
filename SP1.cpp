#include<bits/stdc++.h>
using namespace std;
class sp{
	protected:
	  int pt,pa;
	 public:
	  sp(){
	  } 
	  sp(int pt,int pa)
	  {
	  	this->pt=pt;
		  this->pa=pa;
		} 
		~sp(){
		} 
	int md()
	{
		return sqrt(pow(pt,2)+pow(pa,2)) ;
		}
		void rutgon()
		{
			int a=pt;
			int b=pa;
			while (a*b!=0)
			{
				if (a>b) a=a-b;
				else if (b>a) b=b-a;
				 
			 } 
			 
			 pt=pt/a;
			 pa=pa/a; 
		 } 
	friend istream &operator >>(istream &is,sp &p);
	friend ostream &operator <<(ostream &os,sp p);
		
}; 
	istream &operator >>(istream &is,sp &p)
	{
		cout<<"Nhap phan thuc: ";
		is>>p.pt; 
		do 
		{
		
		cout<<"nhap phan ao: ";
		is>>p.pa;
	} while (p.pa==0); 
	 return is; 
		}	
	ostream &operator <<(ostream &os,sp p) 
	{ 
	 
	return os; 
	}
class sp2:public sp{
	 
	 public: 
	  sp2 operator +(sp2 p);
	  sp2 operator -(sp2 p);
	  bool operator >(sp2 p);
	  bool operator <(sp2 p);
	  sp2 operator =(sp2 p); 
	   
};
sp2 sp2::operator+(sp2 p)
{
	sp2 kq;
	kq.pt=pt+p.pt;
	kq.pa=pa+p.pa;
	kq.rutgon() ;
	return kq; 
 } 
 sp2 sp2::operator-(sp2 p)
{
	sp2 kq;
	kq.pt=pt-p.pt;
	kq.pa=pa-p.pa;
	kq.rutgon() ;
	return kq; 
 }
 bool sp2::operator >(sp2 p)
 {
 	return md()>p.md(); 
  } 
   bool sp2::operator <(sp2 p)
 {
 	return md()<p.md(); 
  }
  sp2 sp2::operator =(sp2 p)
  {
  	this->pt=p.pt;
	 this->pa=p.pa;
	 return *this ;
	} 
int main()
{
	int n;
	cin>>n;
	sp2 a[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap so phuc thu: "<<i+1<<endl;
		cin>>a[i] ;
	 } 
	 sp2 tong=a[0]+a[1];
	  
	 sp2 hieu=a[0]-a[1]; 
	 cout<<tong;
	 cout<<hieu; 
 } 
