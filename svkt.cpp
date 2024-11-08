#include <bits/stdc++.h> 
using namespace std; 
class nguoi{
	protected: 
         string hoten;
         int ns;
	public:
	     nguoi()
		 {
		  } 
		void nhap();
		void xuat() ;
		 
	 	
}; 
class sv:public nguoi{
	private:
 		string msv;
		 float dtb;  
	public:
	 void nhapv();
	 void inv();
	 sv()
	 {
	  }
	  friend void sx(sv a[],int n)
	  {
	  	sv tg;
		  for (int i=0;i<n-1;i++) 
		  	for (int j=i+1;j<n;j++)
			  if (a[i].dtb<a[j].dtb)
			  {
			  	tg=a[i];
				  a[i]=a[j];
				  a[j] =tg; 
			   } 
	  }
	  
	 friend void timkiem(sv a[], int n, string x){
    bool check = false;
    for(int i = 0; i < n; i++){
        if(a[i].hoten == x){
            a[i].inv();
            check = true;
        }
    }
    if(!check) cout << "NOT FOUND\n";
}

};
void nguoi::nhap()
{
	cin.ignore() ;
	cout<<"Nhap ten sinh vien:";
	getline(cin, hoten);
 	cout<<"Nhap nam sinh:";
	cin>>ns; 
} 
void nguoi::xuat() 
{
	cout<<hoten<<" "<<ns<<" "; 
}
void sv::nhapv()
{// 
	nhap();
	cin.ignore() ;
 	cout<<"Nhap ma sinh vien:";
	 getline(cin, msv) ;
	cout<<"Nhap diem trung binh:";
	cin>>dtb;
 
  
 } 
 void sv::inv() 
 {
 	 xuat(); cout<<msv<<" "<<dtb<<" "<<endl;
	 
 }
int main()
{

 int n,i;
 cin>>n;
 sv b[10];
 for (int i=0;i<n;i++) 
 { cout<<"Nhap sinh vien thu:"<<i+1<<endl;
    b[i].nhapv(); 
 }
 for (int i=0;i<n;i++) 
 {
 	cout<<"Thong tin sinh vien thu "<<i+1<<endl;
	 b[i].inv(); 
  } 
  sx(b,n) ;
  cout<<"Danh sach sau sap xep la"<<endl; 
 for (int i=0;i<n;i++) 
 {
 	
	 b[i].inv(); 
  } 
  cin.ignore();
  string cantim; 
  cout<<"Nhap nguoi can tim: "; 
  getline(cin, cantim); 
  timkiem(b,n,cantim) ;
}
