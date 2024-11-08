#include <bits/stdc++.h>
using namespace std;
class hv
{ 
 	protected:
	   float cv;
	 public: 
	   void nhaphv()
	   { 
	    cout<<"Nhap canh :";
		cin>>cv; 
		} 
		float dthv()
		{ 
		return cv*cv; 
		 } 
		 float cvhv()
		 { 
		 return cv*4; 
		  } 
		void inv()
		{ 
		cout<<"Dien tich hinh vuong : "<<dthv()<<endl;
		cout<<"Chu vi hinh vuong: "<<cvhv()<<endl; 
		 } 
 };
 void max(hv a[],int n)
 { 
  hv maxx=a[0];
  int vt; 
  for (int i=1;i<n;i++)
  {
  	 if (maxx.dthv()<a[i].dthv())
  	 {
	   
	   maxx=a[i]; 
	    vt=i; 
}
   }
   cout<<"Hinh vuong co dien tich lon nhat: "<<endl; 
   a[vt].inv(); 
   cout<<"Vi tri la : "<<vt+1; 
   
  } 
 class hcn:public hv
 {
 	 private: 
	  float chcn;
	 public: 
	  void nhaphcn()
	  { 
	   nhaphv(); 
	   cout<<"Nhanh canh con lai: ";
	   cin>>chcn; 
	   } 
	   float dthcn()
	   { 
	    return chcn*cv; 
		} 
	 float cvhcn()
	 { 
	  return (chcn+cv)*2; 
	  } 
	  void inhcn()
	  { 
	  cout<<"Dien tich hinh chu nhat: "<<dthcn()<<endl;
	  cout<<"Chu vi hinh chu nhat: "<<cvhcn()<<endl; 
	   } 
  } ;
  void sx(hcn a[],int n)
  { 
   for (int i=0;i<n-1;i++)
   { 
    for (int j=i+1;j<n;j++)
	{ 
	 if (a[i].cvhcn()<a[j].cvhcn())
	 {
	 	 hcn tg=a[i];
		  a[i]=a[j];
		  a[j]=tg; 
	  } 
	 } 
	} 
   } 
   int main()
   {  int so;
   do
   { 
    cout<<"\ndanh sach: ";
	cout<<"\n1.Tim hinh vuong lon nhat: ";
	cout<<"\n2.Sap xep hinh chu nhat: ";
	cout<<"\n0.Thoat"<<endl ;
	cin>>so;
	switch(so)
	{ 
	case 1:
	{ int n; 
	 cout<<"Nhap so hinh vuong: ";
   		cin>>n;
   		hv *a= new hv[n];
   		for (int i=0;i<n;i++)
			{ 
				cout<<"Nhap hinh vuong thu "<<i+1<<endl;
				a[i].nhaphv() ;
	
	 		} 
	 	max(a,n);
		 break; 
	 } 
	 case 2: 
	 {  int m;
	   cout<<"Nhap so hinh chu nhat: ";
	   cin>>m;
	   hcn *b=new hcn[m];
	    for (int i=0;i<m;i++)
			{ 
				cout<<"Nhap hinh vuong thu "<<i+1<<endl;
				b[i].nhaphcn() ;
	
	 		}
	 	sx(b,m);
	 	cout<<"danh sach sau sap xep la: "<<endl; 
		 for (int i=0;i<m;i++)
		 b[i].inhcn();
		 break; 
	  } 
	  default: 
	   cout<<"Chon lai so: "<<endl; 
	} 
	}while (so!=0);
	

 
}


  
  
	 
	 
