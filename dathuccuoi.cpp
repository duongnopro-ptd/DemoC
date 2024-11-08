#include <bits/stdc++.h>
using namespace std;
 
class dt{
	 protected: 
	  int bac;
	  int *hs;
	 public: 
	  dt()
	  {}
	  dt(int bac,int *hs)
	  {  
	  this->bac=bac; 
	   hs=new int[bac+1] ;
	  for (int i=0;i<=bac;i++)
	  hs[i]=0; 
	   } 
	   ~dt()
	   {  delete[] hs; 
		} 
	   friend istream &operator >> (istream &is,dt &t);
	   friend ostream &operator << (ostream &os,dt t);
	   
}; 
	istream &operator >> (istream &is,dt &t)
	{ 
	 cout<<"Nhap bac cua da thuc :";
		 is>>t.bac;
		 
		 t.hs=new int[t.bac+1] ;
	  for (int i=t.bac;i>=0;i--)
	  { 
	   cout<<"Nhap he so cua bac "<<i<<":";
	   is>>t.hs[i]; 
	   } 
	   return is; 
	}
	ostream &operator << (ostream &os,dt t)
	{ 
	 os<<t.hs[t.bac]<<"x^"<<t.bac;
	 for (int i=t.bac-1;i>=1;i--)
	 { 
	  if (t.hs[i]<0) os<<t.hs[i]<<"x^"<<i;
	  else if (t.hs[i]>0) os<<"+"<<t.hs[i]<<"x^"<<i; 
	  } 
	  if (t.hs[0]>0 ) os<<"+"<<t.hs[0]<<endl;
	  else if (t.hs[0]<0)  os<<t.hs[0]<<endl;
	  return os; 
	}
class dt2:public dt{
	 public: 
	   dt2 operator +(dt2 m);
	   dt2 operator -(dt2 m);
	   dt2 operator *(int n);  
}; 
 dt2 dt2::operator +(dt2 m) 
 {
 	 dt2 kq;
	 kq.bac=max(bac,m.bac) ;
	 kq.hs=new int[kq.bac+1] ;
	 for (int i=0;i<=kq.bac;i++)
	 { int hs1=0;
	 	int hs2=0;
	 if (i<=bac)
	  hs1=hs[i];
	 if (i<=m.bac)
	 hs2=m.hs[i];
	 kq.hs[i] =hs1+hs2; 
	  } 
	  return kq; 
	  
  } 
   dt2 dt2::operator -(dt2 m) 
 {
 	 dt2 kq;
	 kq.bac=max(bac,m.bac) ;
	kq.hs=new int[kq.bac+1];
	 for (int i=0;i<=kq.bac;i++)
	 {  int hs1=0;
	 int hs2=0;
	 if (i<=bac)
	  hs1=hs[i];
	 if (i<=m.bac)
	 hs2=m.hs[i];
	 kq.hs[i] =hs1-hs2; 
	  } 
	  return kq; 
	  
  } 
int main()
{ 
 dt2 x,y;
 cout<<"Nhap da thuc thu nhat: "<<endl;
 cin>>x;
 cout<<"Nhap da thuc thu hai: "<<endl;
 cin>>y;
 cout<<x<<endl;
 cout<<y<<endl; 
 dt2 tong=x+y;
 cout<<"Tong hai da thuc: "<<tong<<endl;
 dt2 hieu=x-y;
 cout<<"Hieu hai da thuc: "<<hieu<<endl;
// delete[] hs; 
 } 

 
