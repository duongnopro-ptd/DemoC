#include <bits/stdc++.h>
using namespace std;
class nguoi{
	protected:
	 string lop,khh;
	 int kyh;
	  
	  
}; 
class hs:public nguoi{
	private:
	 string ht,qq;
	 int ns;
	public:
	 void nhap()
	 { cin.ignore() ;
	   cout<<"Nhap ho ten:";
	   getline(cin, ht);
	   cout<<"Nhap nam sinh:";
	   cin>>ns;
	   cin.ignore() ;
	   cout<<"Nhap que quan:";
	   getline(cin, qq);
	   cout<<"Nhap lop:";
	   getline(cin, lop);
	   cout<<"Nhap khoa hoc:";
	   getline(cin, khh);
	   cout<<"Nhap ky hoc:";
	   cin>>kyh; 
	  }
	  void in()
	  {cout<<ht<<" "<<ns<<" "<<qq<<" "<<lop<<" "<<khh<<" "<<kyh<<endl; 
	   } 
	  void ktra(hs a)
	   { 
	   if (a.ns==1985) a.in(); 
		} 
	friend float ktra2(hs a[],int n)
	{ int d=0; 
	for (int i=0;i<n;i++) 
	
		if (a[i].ns==1985 && a[i].qq=="ThaiNguyen") 
		 d=d+1;
		 return d; 
	 } 

} ;
 
int main(){
	int n;
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	hs a[n];
	for (int i=0;i<n;i++)
	{cout<<"Nhap thong tin sinh vien thu "<<i+1<<endl;
	a[i].nhap(); 
	 } 
	 cout<<"Danh sach sinh vien sinh nam 1985 la"<<endl;
	 for(int i=0;i<n;i++)
	 a[i].ktra(a[i]);
	  
	  
	  
	  cout<<"So sinh vien can tim la "<<ktra2(a,n); 
	  
} 
