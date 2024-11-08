#include <bits/stdc++.h>
using namespace std;
class Time{
	protected: 
	 int h,m,s;
	public: 
	 time()
	 {  
	  } 
	  time(int h,int m,int s)
	  { 
	  this->h=h;
	  this->m=m;
	  this->s=s; 
	   }
	   void chuanhoa()
	   { 
	    if (s >= 60){
			m += s/60;
			s = s%60;
		}
		if (s < 0){
			s += 60;
			m--;
		}
		if (m>=60){
			h += m/60;
			m = m%60;
		}
		if (m < 0){
			m += 60;
			h--;
		}
		if (h >= 24){
			h = h%24;
		}
		if (h<0){
		h+= 24;
		} 
        
		} 
	   friend istream &operator>>(istream &is, Time &t);
	   friend ostream &operator <<(ostream &os,Time t);
	    
}; 
istream &operator>>(istream &is, Time &t)
	{ 
	 	
		 	cout<<"Nhap gio: ";
			is>>t.h; 
		    cout<<"Nhap phut: ";
		   	is>>t.m; 
		  	cout<<"Nhap giay: ";
		   	is>>t.s; 
		  
	 } 
	 ostream &operator <<(ostream &os,Time t)
	 {
	 	os<<t.h<<":"<<t.m<<":"<<t.s<<endl;
		 return os; 
	 }
class time2:public Time
{
	 public: 
	   time2 operator +();
	   time2 operator -(); 
 } ;
	
	 time2  time2::operator +() 
	 { 
	   time2 kq;
	   kq.s=this->s+1;
	   kq.m=this->m;
	   kq.h=this->h;
	   
		  kq.chuanhoa(); 
		  return kq; 
	  } 
	  time2 time2::operator -()
	  { 
	   time2 kq;
	   kq.s=this->s-1;
	   kq.m=this->m;
	   kq.h=this->h;
	kq.chuanhoa(); 
		return kq; 
		}  
int main()
{ 
 time2 a;
 cout<<"Nhap thoi gian: ";
 cin>>a;
 a.chuanhoa(); 
 cout<<"Hien thoi gian nhap: "<<a;
 time2 n=+a;
 cout<<"Thoi gian khi tang 1 giay: "<<n;
 time2 m=-a;
 cout<<"Thoi gian khi giam 1 giay: "<<m;
  
 } 
