#include <bits/stdc++.h>
#include <iostream> 
#include <stdio.h> 
#include <conio.h> 
using namespace std; 
class sinhvien
{
	private:
	   float diem;
	  	  string hoten,masv;
	public:
	    sinhvien(float diem,string hoten,string masv)
		{this->diem=diem;
		 this->hoten=hoten;
		 this->masv=masv; 
		 }
		sinhvien(){
		}
		void nhap();
		void inp();
	 	sinhvien quydoi(sinhvien b);
		  
 }; 
void sinhvien::nhap()
{
	cin.ignore();
	cout<<"Nhap ten sinh vien :";
	getline(cin, hoten);
	cout<<"Nhap ma sinh vien: ";
	getline(cin, masv) ;
	cout<<"Nhap diem sinh vien: "; 
	cin>>diem;
	 
}
void sinhvien::inp()
{	
	cout<<hoten<<" "<<masv<<" "<<fixed<<setprecision(2)<<diem<<"\n";
	 
 } 
 sinhvien sinhvien::quydoi(sinhvien b)
 { sinhvien gpa; 
 	if (diem >=8.5) gpa.diem=4;
	 else if (diem<8.5 && diem>=8.0) gpa.diem=3.5;
	  else if (diem<8 && diem>=7.0 ) gpa.diem=3;
	  	else if (diem<7 && diem>=6.5 ) gpa.diem=2.5;
		  else if (diem<6.5 && diem>=5.5 ) gpa.diem=2;
		   else if (diem<5.5 && diem>=5 ) gpa.diem=1.5;
		     else if (diem<5 && diem>=4.0 ) gpa.diem=1;
		      else gpa.diem=0; 
		      return gpa;
			  
  } 
int main()
{sinhvien a[1000];
 int i,n;
 cin>>n;
 for (int i=0;i<n;i++)
 {
 	cout <<"Nhap thong tin sinh vien thu "<<i+1<<"\n";
	 a[i].nhap();
	  
  }
  for (int i=0;i<n;i++)
  {
  	cout<<"Thong tin sinh vien: ";
	  a[i].inp() ;
	  cout<<"Diem quy doi la ";a[i].quydoi(a[i]).inp() ;
   } 
 } 

 
