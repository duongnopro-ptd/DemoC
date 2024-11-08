#include <conio.h>
#include <iostream>
#include<math.h> 
using namespace std;
int ucln(int a,int b) 
{
	while (a!=b)
	{if (a>b) a=a-b;
	else if (b>a) b=b-a;
	 
	 }
	 
	 return a; 
}
class ps
{
	protected:
	 int ts;
	 int ms;
	public:
	 ps()
	 {
//	 ts=0;ms=1;	
	} 
	~ps()
	 {
	  //	 ts=0;ms=1;	
	}
	ps(int ts,int ms)
	{
		this->ts=ts;
		this->ms=ms; 
	 } 
	 friend istream &operator >>(istream &is,ps &t1);
	 friend ostream &operator <<(ostream &os,ps t1); 
	
 };
 class ps2:public ps
 {
 	public:
		ps2 operator +(ps2 t2);
		ps2 operator -(ps2 t2);
		ps2 operator *(ps2 t2); 
		ps2 operator /(ps2 t2);
		friend void sx(ps2 t[],int n)
		{	ps2 tn;		 
			for (int i=0;i<n-1;i++)
			 for (int j=i+1;j<n;j++) 
			 {
			 tn.ts=t[i].ts*t[j].ms-t[i].ms*t[j].ts ;
			 if (tn.ts<0)
			 {ps2 tg;
			 tg=t[i];
			 t[i]=t[j];
			 t[j]=tg; 
			  } 
		 } 
	}
  } ;
istream &operator >>(istream &is,ps &t1)
{
	cout<<"Nhap tu so:";
	is>>t1.ts;
	cout<<"Nhap mau so:";
	is>>t1.ms; 
	return is; 
}
ostream &operator <<(ostream &os,ps t1)
{ if (t1.ts>0) 
	os<<t1.ts/ucln(t1.ts,t1.ms)<<"/"<<t1.ms/ucln(t1.ts,t1.ms);
	else if(t1.ts<0)
	{
	t1.ts=abs(t1.ts) ;
	 os<<"-"<<t1.ts/ucln(t1.ts,t1.ms)<<"/"<<t1.ms/ucln(t1.ts,t1.ms);
	}
	return os; 
}
ps2 ps2 ::operator +(ps2 t2)
{
	ps2 tong;
	tong.ts=ts*t2.ms +t2.ts*ms;
	tong.ms=ms*t2.ms; 
 
	return tong; 
 }
ps2 ps2 ::operator -(ps2 t2)
{
	ps2 hieu;
	hieu.ts=this->ts*t2.ms -t2.ts*this->ms;
	hieu.ms=this->ms*t2.ms;  
	return hieu; 
 } 
 ps2 ps2 ::operator *(ps2 t2)
{
	ps2 tich;
	tich.ts=ts*t2.ts ;
	tich.ms=ms*t2.ms;  
	return tich; 
 }
ps2 ps2 ::operator /(ps2 t2)
{
	ps2 thuong;
	thuong.ts=ts*t2.ms ;
	thuong.ms=ms*t2.ts;  
	return thuong; 
 }
 int main()
 { //ps2 t1,t2,t3,t4,t5,t6; 
  ps2 t[10];
  ps2 tong,hieu,tich,thuong; 
 
  int n;
  cin>>n; 
  for (int i=0;i<n;i++)
  {cout<<"Nhap phan so thu :"<<i+1<<endl;
   cin>>t[i];
   }
   for (int i=0;i<n;i++)
  {cout<<"In phan so thu :"<<i+1<<endl;
   cout<<t[i]<<endl;
   }
    
  
  tong=t[1]+t[2];cout<<tong<<endl; 
  hieu=t[1]-t[2];cout<<hieu<<endl; 
  tich=t[1]*t[2];cout<<tich<<endl; 
  thuong=t[1]/t[2];cout<<thuong<<endl; 
  sx(t,n) ;
  cout<<"Mang sau khi sap xep la"<<endl;
  for (int i=0;i<n;i++) 
  cout<<t[i]<<endl; 
 
  } 
 
  

