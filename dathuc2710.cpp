#include<bits/stdc++.h>
int max(int a,int b)
{
	if (a>b) return a;
	else if (a<b) return b; 
 } 
int min(int a,int b)
{
	if (a<b) return a;
	else if (a>b) return b; 	
 } 
using namespace std;

class dt
{
	protected:
	 int hs[100];
	 int bac;
	public: 
	  dt()
	  {}
	  dt(int bac,int hs[])
	  {
	  	 this->bac=bac;
		 for (int i=0;i<bac;i++)
		 this->hs[i]=hs[i]; 
	  }
	  friend istream &operator >>(istream &is,dt &m);
	  friend ostream &operator <<(ostream &os,dt m);
	   
 };
class dt2:public dt{
	public:
	 dt2 operator +(dt2 t);
	 dt2 operator -(dt2 t);
	 dt2 operator *(int n); 
};
	istream &operator >>(istream &is,dt &m)
	{ 
	  cout<<"Nhap bac cua da thuc: ";
	  is>>m.bac;
	  for (int i=m.bac;i>=0;i--)
	  {
	  	cout<<"Nhap bac cua he so thu: "<<i<<":";
		  cin>>m.hs[i]; 
	   } 
	   return is; 
	 }
	ostream &operator <<(ostream &os,dt a)
	{ os<<a.hs[a.bac]<<"x^"<<a.bac;
	 for (int i=a.bac-1;i>=1;i--)
	  {
	  	 if (a.hs[i]<0) os<<a.hs[i]<<"x^"<<i;
		   else if (a.hs[i]>0) os<<"+"<<a.hs[i]<<"x^"<<i;
		    
	   }
	   if (a.hs[0]<0) os<<a.hs[0]<<endl;
	   else if (a.hs[0]>0) os<<"+"<<a.hs[0]<<endl; 
	return os;	
	  }
	 dt2 dt2::operator +(dt2 t)
	 {	dt2 kq; 
	    kq.bac=max(bac,t.bac); 
	 	for (int i=0;i<=min(t.bac,bac);i++)
		 kq.hs[i]=hs[i]+t.hs[i];
		 
		 if (max(bac,t.bac)==bac)
		 { for (int i=t.bac+1;i<=bac;i++) 
		  kq.hs[i]=hs[i]; 
		  } 
		 if (max(bac,t.bac)==t.bac)
		 { for (int i=bac+1;i<=t.bac;i++) 
		  kq.hs[i]=t.hs[i]; 
		  }
		  return kq; 
	  } 
	  dt2 dt2::operator -(dt2 t)
	  {	dt2 kq;
	 // 3x4 3x4 4x2 5x1 4    5x5 6x4 4x3 3x2 2x1 2 
	    kq.bac=max(bac,t.bac); 
	 	for (int i=0;i<=min(t.bac,bac);i++)
		 
		 kq.hs[i]=hs[i]-t.hs[i]; 
		 
	  	if (max(bac,t.bac)==bac)
		 { for (int i=t.bac+1;i<=bac;i++) 
		  kq.hs[i]=hs[i]; 
		  }
		  if (max(bac,t.bac)==t.bac)
		 { for (int i=bac+1;i<=t.bac;i++) 
		  kq.hs[i]=-t.hs[i]; 
		  }
		  return kq; 
	  }
	  dt2 dt2::operator *(int n)
	  { 
	   dt2 kq;
	   kq.bac=bac;
	   for (int i=0;i<=bac;i++)
	   
		kq.hs[i]=hs[i]*n;
		return kq; 
	  }
int main()
{
	dt2 a,b;
	cout<<"Nhap da thuc thu nhat:"<<endl;
	cin>>a;
	 cout<<"Nhap da thuc thu hai:"<<endl;
	cin>>b;
	int so;
	do
	{
		 cout<<"\nDanh sach: ";
		 cout<<"\n1.In hai da thuc";
		 cout<<"\n2.Tong hai da thuc";
		 cout<<"\n3.Hieu hai da thuc";
		 cout<<"\n4.Tich da thuc voi 1 so";
		 cin>>so;
		 switch(so)
		 {
		 	 case 1:
			   {
			   	cout<<a;
				cout<<b;
				break;    
				} 
			 case 2:
			 {
			 	dt2 tong;
				 tong=a+b;
				 cout<<tong; 
				 break; 
			  } 
			  case 3:
			  {
			  	 dt2 hieu;
				   hieu =a-b;
				   cout<<hieu;
				   break; 
			   } 
			   case 4:
			   {
			   	int k;
				   cin>>k;
				   dt2 tich=a*k;
				   cout<<tich; 
				   break; 
				} 
				default:
				 cout<<"Chon lai so"<<endl;
				  
		  } 
	 } while (so!=0) ;
  }  
