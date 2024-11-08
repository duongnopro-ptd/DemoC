#include <bits/stdc++.h>
using namespace std;
class ps{
	protected: 
	 int ts,ms; 
	public:
	 ps()
	 {
	  } 
	  ps(int ts,int ms)
	  { this->ts=ts;
	    this->ms=ms;
		 }
		void setts(){this->ts=ts;} 
		void setms(){this->ms=ms;}
		int getts(){return ts;}
		int getms(){return ms;}
	void rutgon()
		{
			//b1 tim uoc chung lon nhat
			int a=abs(ts);int b=abs(ms);
			while (a!=b)
			{
				if (a>b) a-=b;
				else b-=a;
				}
			ts=ts/a;
			ms=ms/a;
			
		}
		friend istream &operator >>(istream &is,ps &a);
		friend ostream &operator <<(ostream &os,ps a);
		 
		
		
}; 
	istream &operator >>(istream &is,ps &a)
	{
		cout<<"Nhap tu so: ";
		is>>a.ts;
		do
		{
			cout<<"Nhap mau so khac 0: ";
			is>>a.ms; 
		 } while (a.ms==0) ;
		 return is; 
	}
	ostream &operator <<(ostream &os,ps a) 
	{	if (a.ts==0 || a.ms==0) os<<0<<endl;
	else
	{
	 
		os<<a.ts<<"/"<<a.ms<<endl;
	}
		return os;
		 
	}
class ps2:public ps{
	public: 
	ps2 operator +(ps2 P);
	ps2 operator -(ps2 P);
	ps2 operator *(ps2 P);
	ps2 operator /(ps2 P); 
	ps2 operator =(ps2 P);
	bool operator >(ps2 P);
	bool operator <(ps2 P);
};
ps2 ps2::operator +(ps2 P)
{
	ps2 kq;
	kq.ts=ts*P.ms+P.ts*ms;
	kq.ms=ms*P.ms;
	if (kq.ts==0 || kq.ms==0)
	return kq; 
	else 
	{
		kq.rutgon();
	 return kq;
	 } 
  }  
ps2 ps2::operator -(ps2 P)
{
	ps2 kq;
	kq.ts=ts*P.ms-P.ts*ms;
	kq.ms=ms*P.ms;
	if (kq.ts==0 || kq.ms==0)
	return kq; 
	else 
	{
		kq.rutgon();
	 return kq;
	 } 
	
  }  

ps2 ps2::operator *(ps2 P)
{
	ps2 kq;
	kq.ts=ts*P.ts;
	kq.ms=ms*P.ms;
	if (kq.ts==0 || kq.ms==0)
	return kq; 
	else 
	{
		kq.rutgon();
	 return kq;
	 } 
  } 
 ps2 ps2::operator /(ps2 P)
{
	ps2 kq;
	kq.ts=ts*P.ms;
	kq.ms=ms*P.ts;
if (kq.ts==0 || kq.ms==0)
	return kq; 
	else 
	{
		kq.rutgon();
	 return kq;
	 } 
  }  
  
 ps2 ps2::operator =(ps2 P)
 {
 	this->ts=P.ts;
	 this->ms=P.ms;
	 return *this ;
   }  
   bool ps2::operator >(ps2 P)
   {
   	return (ts*P.ms) > (P.ts*ms) ;
	 } 
	 
	 bool ps2::operator <(ps2 P)
   {
   	return (ts*P.ms) < (P.ts*ms) ;
	 }  
	void sx(ps2 a[],int n)
	{
		 for (int i=0;i<n-1;i++)
		  for (int j=i+1;j<n;j++)
		  {
		  	 if (a[i]>a[j]) //toan tu so sanh 
		  	 {
		  	 	ps2 tg=a[i];//toan tu gan 
			 		a[i]=a[j];
					 a[j]=tg; 
			   }
		   } 
	 }
	 void timkiem(ps2 a[],int n)
	 { 
	 		ps2 max=a[0];
			 for (int i=1;i<n;i++)
			  if (max<a[i]) max=a[i];
			  max.rutgon();
			  cout<<max; 
	  } 
int main()
{ int n;
 do
		{
			 cout<<"nhap so phan so: ";
			 cin>>n; 
		 } 
		 while (n<0|| n>10);
	ps2 *a=new ps2[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap phan so thu: "<<i+1<<endl;
		cin>>a[i]; 
	 } 
	 int chonso;
	 do
	 { 
	  cout<<"\nDanh sach:";
	   cout<<"\n1.In danh sach phan so theo sap xep ";
	   cout<<"\n2.Phan so lon nhat ";
	   cout<<"\n3.Phep tinh phan so ";
	   cout << "\n0. Huy chon!";
    	cout << "\nChon so: ";
	   cin>>chonso;
	   switch(chonso)
	   {
	   	 case 1: 
			{
				sx(a,n);
				for (int i=0;i<n;i++)
				cout<<a[i]<<" ";
				cout<<endl; 
				break;
				 
			 }
		  case 2:
		  { 
		  cout<<"Phan so lon nhat la: ";
		  timkiem(a,n);
		  cout<<endl; 
		  break;
		   
		   } 
		   case 3:
		    {
		    	ps2 m,n;
				cout<<"So thu nhat: ";
				cin>>m;
				cout<<"So thu hai: ";
				cin>>n;
				ps2 tong=m+n;
				cout<<"\nTong hai phan so: "<<tong;
				ps2 hieu=m-n;
				cout<<"\nHieu hai phan so: "<<hieu;
				 ps2 tich=m*n;
				cout<<"\nTich hai phan so: "<<tich;
				ps2 thuong=m/n;
				cout<<"\nThuong hai phan so: "<<thuong;
				break; 
			 } 
			 default:
			cout << "Chon lai so" << endl;
	   }
	  } while (chonso !=0) ;
	delete[] a; 
 } 
