#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class  sophuc
{
	 protected:
	  int pt,pa;
	 public:
	 
	   sophuc()
	   {	pt=0;
	    	pa=1; 
		} 
		sophuc(int pt,int pa)
		{
			this->pt=pt;
			this->pa=pa; 
		}
		~sophuc()
		{	pt=0;
	   		pa=1; 
		 } 
		 int md()
		 { return   return sqrt(pow(pt,2)+pow(pa,2)) ;
		  } 
		 friend istream &operator >>(istream &is,sophuc &p);
		 friend ostream &operator <<(ostream &os,sophuc p) ;
	   
	
 }; 
class sophuc2:public sophuc
{
	public: 
		sophuc2 operator + (sophuc2 P); 
	   sophuc2 operator - (sophuc2 P); 
	   sophuc2 operator * (sophuc2 P); 
	   sophuc2 operator / (sophuc2 P); 	
	   sophuc2 operator = (sophuc2 P); 
	   bool operator <(sophuc2 P);
	     bool operator <(sophuc2 P); 
 } ;
	istream &operator >>(istream &is,sophuc &p)
{
				cout<<"Nhap phan thuc:";
 				is>>p.pt;
 				cout<<"Nhap phan ao:";
 				is>>p.pa;
 				return is; 
}
ostream &operator <<(ostream &os,sophuc p) 
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
	
	
		
sophuc2 sophuc2::operator+(sophuc2 P)
{ 	sophuc2 k;
 		k.pt=pt+P.pt;
 		k.pa=pa+P.pa;
 	return k;
 } 
sophuc2 sophuc2::operator-(sophuc2 P)
{ 	sophuc2 k;
 		k.pt=pt-P.pt;
 		k.pa=pa-P.pa;
 	return k;
 }
 bool sophuc2::operator >(sophuc2 P);
 { return  
 }
 bool sophuc2::operator >(sophuc2 P);  
int main()
{
	sophuc2 a,b,c,d;
	//	a.nhap();
	//	b.nhap();
	cin>>a;
	cin>>b; 
		c=a+b;
		d=a-b; 
		cout<<c;
		cout<<d; 
//	c.xuat();
//	d.xuat();

}
