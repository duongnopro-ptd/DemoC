#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h> 
#include<bits/stdc++.h> 
using namespace std;
class sinhvien
{ private :
      float dt,dl,dh;
       
	  string hoten,masv;
 public:
    sinhvien(float dl,float dt,float dh,string masv,string hoten)
	{this->dh=dh; 
	 this->dl=dl;
	 this->dt=dt; 
	  this->masv=masv;
	  this->hoten=hoten; 
	 }
	  sinhvien()
	{dt=8;
	 dl=8;
	 dh=9 ;
	 cout<<"Ham tao";
	 }
	 ~ sinhvien()
	{dt=8;
	 dl=8;
	 dh=8 ;
	 cout<<"Ham tao";
	 }
	 void nhap();
	 void inp();
	friend float dtb(sinhvien);
	  
 } ;
void sinhvien::nhap()
{	cin.ignore();
	cout<<"Nhap ho ten sinh vien:" ;
	getline(cin, hoten);
	// cin.ignore();  
	cout<<"Nhap ma sinh vien:" ;
 	getline(cin, masv) ;
	cout<<"Nhap diem Toan Ly Hoa :";
	cin>>dt>>dl>>dh; 
 } 
void sinhvien::inp()
{cout<<this->hoten<< " "<<this->masv <<" "<<this->dt<<" "<<this->dl<<" "<<this->dh <<endl; 
}
float dtb(sinhvien b)
{return (b.dt+b.dl+b.dh)/3;
 } 
int main(){
	int i,n;
	cin>>n;
	sinhvien a[100]; 
	 for (i=0;i<n;i++)
	 {
	 	cout<<"Nhap sinh vien thu "<<i+1<<"\n";
		a[i].nhap() ;
	  } 
	for (i=0;i<n;i++)
	 {
	 	cout<<"Thong tin sinh vien thu "<<i+1<<"\n";
		a[i].inp() ;
		cout<<"Diem trung binh:"<<fixed<< setprecision(2)<<dtb(a[i])<<"\n"; 
	  } 
	
	getch() ;
} 
 
