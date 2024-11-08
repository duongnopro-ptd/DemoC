#include <bits/stdc++.h>
using namespace std;
class nguoi
{
	protected:
	 string ht;
	 int ns;
	public:
	 void nhap()
	 {
	 	cin.ignore();
		 cout<<"Nhap ho ten: ";
		 getline(cin, ht);
		 cout<<"Nhap nam sinh: ";
		 cin>>ns;
		  
	  } 
	  void in(){
	  	cout<<ht<<" "<<ns<<" ";
		   
	  } 
 } ;
 class sv:public nguoi
 { 
  private: 
   string msv;
   float dtb;
  public:
   void nhapsv()
   { nhap(); 
   	cin.ignore() ;
   	cout<<"Nhap ma sinh vien: ";
	getline(cin, msv);
	cout<<"Nhap diem trung binh: ";
	cin>>dtb;
	 
	}
	void insv()
	{
	in();
	cout<<msv<<" "<<dtb<<endl;	
	 } 
	 friend void sx(sv a[],int n)
	 {
	 	for (int i=0;i<n-1;i++)
		 {for (int j=i+1;j<n;j++)
		 if (a[i].dtb>a[j].dtb) 
		 {
		 	sv tg=a[i];
			 a[i]=a[j];
			 a[j]=tg; 
		  } 
		  } 
	  } 
	friend int timkiem(sv n,string ch)
	  {
	  	if (n.ht==ch)
		  return 0;
		  else return 1; 
	   } 
  }; 
int main()
{
	int n;
	cin>>n;
	sv a[n];
	for (int i=0;i<n;i++)
	{cout<<"Nhap thong tinh sinh vien thu "<<i+1<<endl;
	 a[i].nhapsv() ;
	 } 
	 sx(a,n);
	 cout<<"danh sach sau sap xep la "<<endl;
	  for (int i=0;i<n;i++)
	  a[i].insv();
	  cin.ignore(); 
	  string ng;
	  getline(cin, ng);
	  int vt; 
	  for (int i=0;i<n;i++)
	  { if (timkiem(a[i],ng)==0)
	  {
	  vt=i; 
	  break; 
	  }
	   // else vt=-1; 
}
	 
	  if (vt<0) cout<<"Khong tim thay thong tin" ;
	  else 
	  {
	cout<<"Tim thay "<<endl; 
	  a[vt].insv(); 

}
 } 
