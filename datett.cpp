#include <iostream>
#include<conio.h>
using namespace std;
class date
{
	private:
	 int d,m,y;
	public:
	    date()
		{d=1;
		 m=1;
		 y=1; 
		 } 
		 ~ date()
		{d=1;
		 m=1;
		 y=1; 
		 } 
	date(int d,int m,int y) 
	{this->d=d;
	 this->y=y;
	 this->m=m; 
	}
	friend istream &operator >>(istream &is,date &t) ;
	friend ostream &operator <<(ostream &os,date t) ;
	
	 date operator ++(int) ;
	  date operator --(int) ;
	
	
 };
 istream &operator >>(istream &is,date &t)
 { 
	cout<<"Nhap nam:";
	is>>t.y;
	if (t.y%4==0) 
	{
	do 
	   
	   {
	   
 	cout<<"Nhap thang:";
	is>>t.m;
	  }
	  while ((t.m<0)||(t.m>12));
	  if ((t.m==1)||(t.m==3)||(t.m==5)||(t.m==7)||(t.m==8)||(t.m==10)||(t.m==12)) 
	  {
	  do 
	   {
	   
 	cout<<"Nhap ngay:";
	is>>t.d;
	  }
	  while ((t.d<0)||(t.d>31));	
	  }
	  else if  ((t.m==4)||(t.m==6)||(t.m==9)||(t.m==11))
	  {
	  
	  do 
	  	 {
	   
 			cout<<"Nhap ngay:";
			is>>t.d;
	 	 }
	  while ((t.d<0)||(t.d>30));
	  
	}
	else if(t.m==2) 
	{
	
	  do 
	  	 {
	   
 			cout<<"Nhap ngay:";
			is>>t.d;
	 	 }
	  while ((t.d<0)||(t.d>29));
}
	}

	else if(t.y%4!=0) 
		{
	do 
	   {
	   
 	cout<<"Nhap thang:";
	is>>t.m;
	  }
	  while ((t.m<0)||(t.m>12));
	  if ((t.m==1)||(t.m==3)||(t.m==5)||(t.m==7)||(t.m==8)||(t.m==10)||(t.m==12)) 
	  {
	  do 
	   {
	   
 	cout<<"Nhap ngay:";
	is>>t.d;
	  }
	  while ((t.d<0)||(t.d>31));	
	  }
	  else if  ((t.m==4)||(t.m==6)||(t.m==9)||(t.m==11))
	  {
	  
	  do 
	  	 {
	   
 			cout<<"Nhap ngay:";
			is>>t.d;
	 	 }
	  while ((t.d<0)||(t.d>30));
	  
	}
	else 
	{
	
	  do 
	  	 {
	   
 			cout<<"Nhap ngay:";
			is>>t.d;
	 	 }
	  while ((t.d<0)||(t.d>28));
	  	
	}
	
}
	  
 }
 ostream &operator <<(ostream &os,date t) 
 {
 os<<t.d<<"-"<<t.m<<"-"<<t.y; 
 }
 date date::operator ++(int)
 {
 	date t1;
	 t1.d=d+1;
	 if (y%4==0) 
	 {
	if (t1.d<30) 
	{
		t1.m=m;
		t1.y=y; 
	}
	 
	 else if (t1.d==30 && m==2)
	  {
	  	t1.d=1;
		t1.m=m+1;
		t1.y=y; 
	  }
	  else if (t1.d=31 &&m==4||(m==6)||(m==9)||(m==11))
	  {
	  	t1.d=1;
		  t1.m=m+1 ;
		  t1.y=y; 
	  }
	  else if (t1.d=32 &&m==1||(m==3)||(m==5)||(m==7)||(m==8)||(m==10))
	  {
	  	t1.d=1;
		 t1.m=m+1;
		 t1.y=y; 
	  	
	  	
	  }
	  
	  else  if (t1.d=32 &&m==12) 
	  {
	  	t1.d=1;
		 t1.m=m+1;
		 t1.y=y+1;
	  }
	  
 		}
 		else if(y%4!=0)
 		
		 { 
		 	if (t1.d<29) 
	{
		t1.m=m;
		t1.y=y; 
	}
		else if (t1.d==29 && m==2)
	  {
	  	t1.d=1;
		t1.m=m+1;
		t1.y=y; 
	  }
	  else if (t1.d=31 &&m==4||(m==6)||(m==9)||(m==11))
	  {
	  	t1.d=1;
		  t1.m=m+1 ;
		  t1.y=y; 
	  }
	  else if (t1.d=32 &&m==1||(m==3)||(m==5)||(m==7)||(m==8)||(m==10))
	  {
	  	t1.d=1;
		 t1.m=m+1;
		 t1.y=y; 
	  	
	  	
	  }
	  
	  else  if (t1.d=32 &&m==12) 
	  {
	  	t1.d=1;
		 t1.m=1;
		 t1.y=y+1;
	  }
		  } 
	}
 int main()
 
  {
  	date t,t1;
	  cin>>t;
	  cout <<t<<endl;
	  t1=t++;
	  cout<<t1; 
	  getch(); 
   } 
