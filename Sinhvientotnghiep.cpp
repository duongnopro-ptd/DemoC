#include<iostream>
#include<conio.h>
#include<iomanip> 
using namespace std; 
class sinhvien
{
	private:
	 string msv;
	 string hoten;
	 int ns;
	 float dm1,dm2,dm3,dtb;
	public:
	  void nhap();
	  void inp();
	   void sv_khoaluan(sinhvien); 
	   void sv_totnghiep(sinhvien);
	    void sv_thilai(sinhvien);
};
void sinhvien::nhap() 
{ cin.ignore();
 cout<<"Nhap ho ten sinh vien:";
 getline(cin, hoten);
 // cin.ignore();
  cout<<"Nhap ma :";
  getline(cin, msv);
  cout<<"Nhap nam sinh: ";
  cin>>ns;
  cout<<"Nhap diem lan luot cua 3 mon:";
  cin>>dm1>>dm2>>dm3;
  dtb=(dm1+dm2+dm3)/3;
}

void sinhvien::inp() 
{
	cout<<hoten<<"-"<<msv<<"-"<<ns<<"-"<<dm1<<"-"<<dm2<<"-"<<dm3<<endl; 
}
void sinhvien::sv_khoaluan(sinhvien sv)
{	 
	if ((sv.dtb>=7)&&(sv.dm1>5)&&(sv.dm2>5)&&(sv.dm3>5))
	 sv.inp(); 
 
 } 
 void sinhvien::sv_totnghiep(sinhvien sv)
{	 
	if ((sv.dtb<7)&&(sv.dm1>5)&&(sv.dm2>5)&&(sv.dm3>5))
	 sv.inp(); 
 
 } 
 void sinhvien::sv_thilai(sinhvien sv)
{	 
	if ((sv.dm1<5)||(sv.dm2<5)||(sv.dm3<5))
	 sv.inp(); 
 
 } 
 
int main()
{	int n; 
	sinhvien a[10];
	cin>>n;
	int i;
	for (i=0;i<n;i++)
	{cout<<"Nhap thong tin sinh vien thu "<<i+1<<"\n";
	 a[i].nhap();
	  
	 }
	 for (i=0;i<n;i++)
	 {cout<<"Thong tin sinh vien thu "<<i+1<<"\n";
	 a[i].inp(); 
	  } 
	   cout<<"Sinh vien duoc lam khoa luan la:";
	  for (i=0;i<n;i++) 
	  {
	  a[i].sv_khoaluan(a[i]) ;
		}
		cout<<"Sinh vien duoc tot nghiep la:";
	  for (i=0;i<n;i++) 
	  {
	  a[i].sv_totnghiep(a[i]) ;
		}
		cout<<"Sinh vien thi lai la:";
	  for (i=0;i<n;i++) 
	  {
	  a[i].sv_thilai(a[i]) ;
		}	
	  getch() ;
 } 
  
  
