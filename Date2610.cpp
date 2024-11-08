#include <bits/stdc++.h>
using namespace std;
class date{
	private:
	 int d,m,y;
	public: 
	 date()
	 {
	  }
	  date(int d,int m,int y)
	  {
	  	this->d=d;
		this->m=m;
		this->y=y;  
	   } 
	   void nhap()
	   {
	   	cout<<"Nhap nam :";
		  cin>>y;
		 do{
		 	cout<<"Nhap thang :";
			cin>>m; 
		 } while (m<0 || m>12);
		 if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		 {
		 
		  do
		  {
		  	cout<<"Nhap ngay: ";
			 cin>>d; 
		   } while (d<0 || d>31);
		    
		}
		else if (m==4 || m==6 || m==9 || m==11)
		{
			do {
				cout<<"Nhap ngay: ";
				cin>>d; 
			} while (d<0 || d>30) ;
			
		 } 
		 else if (m==2)
		 {
		 	if (y%4==0)
			 {
			 	do
				 {
				 	cout<<"Nhap ngay: ";
					 cin>>d; 
				  } while (d<0 || d>29) ;
			  } 
			  else 
			  {
			  	do
				  { cout<<"Nhap ngay: ";
				  cin>>d ;
				   } while (d<0 || d>28) ;
			   } 
		  } 
		} 
		void inp()
		{
			cout<<d<<"/"<<m<<"/"<<y<<endl; 
		 } 
		 date operator+ ()
		 { 	 
		   date kq;
		   kq.d=this->d+1;
		   kq.m=this->m;
		   kq.y=this->y;
		   if (kq.d>31)
		   {	
		    kq.d=1; 
		   	kq.m=this->m+1;
			if (kq.m>12)
			{
				kq.m=1;
				kq.y=this->y+1; 
				}    
			} 
			if (kq.m==2)
			{
				if (kq.y%4==0)
				{
					if (kq.d>29)
					{
						kq.d=1;
						kq.m=m+1;
						 
					 }
					 else 
					 {
					 	if (kq.d>28)
						 {
						 	 kq.d=1;
							  kq.m=this->m+1; 
						  } 
					  } 
				 } 
			 } 
			 return kq; 
		 }
		 date operator- ()
		 { 	 
		   date kq;
		   kq.d=this->d-1;
		   kq.m=this->m;
		   kq.y=this->y;
		   if (kq.d<1)
		   {
		   	 if (kq.m==2|| kq.m==4 || kq.m==6 || kq.m==8 || kq.m==9 || kq.m==11) 
		   	 {
		   	 	kq.d=31;
				kq.m=this->m-1; 
				}
				else if (kq.m==1)
				{
					kq.d=31;
					kq.m=12;
					kq.y=this->y-1; 
				 }
				 else if (kq.m==5 || kq.m==7 || kq.m==10 || kq.m==12)
				 {
				 	kq.d=30;
					 kq.m=this->m-1; 
				 }
				 else if (kq.m==3)
				 {
				 	 if (y%4==0)
					  {
					  	 kq.d=29;
						   kq.m=2;
						    
					   }
					   else {
					   	kq.d=28;
						   kq.m=2; 
					   } 
				  } 
				 } 
				 return kq; 
		   }
		 
		 
};
int main()
{ date a;
 a.nhap() ;
 a.inp(); 
 date n;
 n=+a;
 n.inp();
 n=-a;
 n.inp(); 
 } 
