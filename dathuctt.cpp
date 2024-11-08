#include <iostream>
#include <conio.h>
using namespace std;
int max(int a,int b)
{if(a>=b) return a;
 else return b; 
} 
int min(int a,int b)
{if(a<b) return a;
 else return b; 
} 

class dathuc
{
	protected:
	 int bac;
	 int hs[10];
	public:
	 dathuc()
	    {bac=0;
		  hs[bac]=0; 
		 } 
	~dathuc()
	 	{bac=0;
		 hs[bac]=0;
		  } 
	dathuc(int bac,int hs[10])
	{this->bac=bac;
	 for (int i=0;i<=bac;i++)
	 this->hs[i]=hs[i]; 
	 }
	friend istream &operator >>(istream &is,dathuc &t);
    friend	ostream &operator <<(ostream &os,dathuc t);
};
class dathuc2:public dathuc
{
	public:
		dathuc2 operator + (dathuc2 t2);
		dathuc2 operator - (dathuc2 t2); 
	 
 } ;
 istream &operator >>(istream &is,dathuc &t)
	{
		cout <<"Nhap bac cua da thuc:";
			is>>t.bac;
		 cout<<"Nhap he so cua da thuc :"<<endl;
		 for (int i=0;i<=t.bac;i++)
		  
		  {cout<<"He so cua "<<i<<"=";
		  is>>t.hs[i]; 
		   } 
		   return is; 
	}
 ostream &operator <<(ostream &os,dathuc t)
 {
 	
 	
	 cout<<t.hs[t.bac] <<"x^"<<t.bac;
	 for (int i=t.bac-1;i>=1;i--)
	 {if (t.hs[i]>0)
	   os<<"+"<<t.hs[i]<<"x^"<<i;
	   else if (t.hs[i]<0)
	     os<<t.hs[i]<<"x^"<<i;
	  } 
	  if (t.hs[0]>=0)
	   os <<"+"<<t.hs[0];
	   else 
	   os<<t.hs[0] ;
 	}
dathuc2 dathuc2 ::operator +(dathuc2 t2)
{	dathuc2 dt;
    //dt 3x^3+2x^2+3X+5 dt2:6x^6+5x^5+4x^4+3x^3+2x^2+3X+5 
	 for (int i=0;i<= min(t2.bac,bac);i++)
	 	dt.hs[i]=hs[i]+t2.hs[i]; 
	if (max(bac,t2.bac)==bac)
	{
	 dt.bac=bac; 
	 for (int i=t2.bac+1;i<=bac;i++)
	  dt.hs[i]=hs[i];
			}
	  
	  else if  (max(bac,t2.bac)==t2.bac)
	  {
	   dt.bac=t2.bac; 
	    for (int i=bac+1;i<=t2.bac;i++)
	  dt.hs[i]=t2.hs[i]; 
		}

		return dt;				
 }
 dathuc2 dathuc2 ::operator -(dathuc2 t2)
{	dathuc2 dt;
	for (int i=0;i<= min(t2.bac,bac);i++)
	 	dt.hs[i]=hs[i]-t2.hs[i]; 
		if (max(bac,t2.bac)==bac)
	{
	 dt.bac=bac;
	 for (int i=t2.bac+1;i<=bac;i++)
	  dt.hs[i]=hs[i];
			}
	   
	  else if  (max(bac,t2.bac)==t2.bac)
	  {
	   dt.bac=t2.bac; 
	    for (int i=bac+1;i<=t2.bac;i++)
	  dt.hs[i]=-t2.hs[i]; 
		}

		return dt;	
	}
int main()
{dathuc2 t1,t2,t3,t4;
 //cout<<t1;
 cin>>t1; 
 cout<<t1;
  cout<<"\n" ;
 cin>>t2;
 cout<<t2;
 t3=t1+t2;
 t4=t1-t2; 
 cout<<"\n"; 
 cout<<t3;
  cout<<"\n";
  cout<<t4; 
 // cout<<min(5,30) ;
	getch(); 
	
	
 } 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

 
