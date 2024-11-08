#include<bits/stdc++.h>
using namespace std;
class sp1{


	 protected:
	  int pt,pa;
	  float md; 
	 public:
	 
	   sp1()
	   {	pt=0;
	    	pa=1; 
		} 
		sp1(int pt,int pa)
		{
			this->pt=pt;
			this->pa=pa; 
		}
		~sp1()
		{	pt=0;
	   		pa=1; 
		 } 
		 friend istream &operator >>(istream &is,sp1 &p);
		 friend ostream &operator <<(ostream &os,sp1 p) ;
	   
	
 }; 
	istream &operator>>(istream &is,sp1 &a)
	{
		cout<<"Nhap phan thuc: ";
		is>>a.pt;
		cout<<"Nhap phan ao: ";
		is>>a.pa;
		a.md=sqrt(a.pt*a.pt+a.pa*a.pa); 
		return is; 
	}
	ostream &operator<<(ostream &os,sp1 a)
	{
	if (a.pt!=0){
	if (a.pa<0)
	os<<a.pt<<a.pa<<"*i";
	else if(a.pa>0) 
	os<<a.pt<<"+"<<a.pa<<"*i";}
  else if (a.pt==0)
  {os<<a.pa<<"*i" ;
   }
   os<<"\n"<<a.md; 
   return os; 
	}
class sp2:public sp1{
	public:
	  bool operator == (sp2 P); 
	  int operator < (sp2 P); 
	  sp2 operator =(sp2 P); 
}; 
sp2 sp2::operator  =(sp2 P)
{
	this->pt=P.pt;
	this->pa=P.pa;
	return *this; 
}
bool sp2::operator==(sp2 P)
{
	return (pt==P.pt && pa==P.pa) ;
	
}

int sp2::operator<(sp2 P)
{ 
 if ((pt * pt + pa * pa) < (P.pt * P.pt + P.pa * P.pa))
 return 1;
 else return 0; 
 
}
int main(){
	int n;
	cin>>n; 
	sp2 a[10];
	for (int i=0;i<n;i++){
		cout<<"Nhap so phuc thu "<<i+1<<endl;
		cin>>a[i]; 
	}
	for (int i=0;i<n;i++){
		cout<<"\nin so phuc thu "<<i+1<<endl;
		cout<<a[i] ;
	} 
	sp2 max= a[0];     //toán tu gán 
	for (int i=1;i<n;i++)
	if ((max<a[i])==1) //toán tu so sanh 
	max=a[i];    //toan tu gan 
	cout<<"\nso phuc lon nhat la: "; 
	cout<<max; 
} 

	
