#include <bits/stdc++.h>
using namespace std;
class hv{
	protected:
	  float canh;
	public:
	void nhap(){
		cout<<"Nhap canh: ";
		cin>>canh;
		 
	} 
	 float dthv(){
	 	return canh*canh; 
	 } 
	 float cvhv(){
	 	return canh*4; 
	 } 
	void xuat(){
		cout<<canh<<" "<<dthv()<<" "<<cvhv()<<endl; 
	} 
	
	friend void mm(hv a[],int n)
	{
	 	hv max = a[0];
	// 	hv min = a[0];
	int vt; 
		 for (int i=1;i<n;i++)
		 {
		 
		 if (max.dthv()<a[i].dthv() )
		 {
		 
		 max=a[i];
		  vt=i;
	}
	}
	 cout<<"Dien tich lon nhat la: "<<max.dthv()<<endl;
	 cout<<"Vi tri :"<<vt+1<<endl; 
	 } 
}; 
class hcn :  public hv{
	private:
	 float canh2;
	public:
	 void nhap2(){
	 	nhap();
		cout<<"Nhap canh con lai: ";
		cin>>canh2;  
	 } ;
	 float dthcn()
	 {
	 	return canh*canh2; 
	  } 
	  float cvhcn()
	  {
	  	return (canh+canh2)*2; 
	   } 
	 void xuat2(){
	 	
		 cout<<canh <<" "<<canh2<<" "<<cvhcn()<<" "<<dthcn()<<endl; 
	 } 
	 
	 friend  void sx(hcn a[], int n)
	   {
	   	for (int i=0;i<n-1;i++){
		   
		   for (int j=i+1;j<n;j++) 
		   {
		   	if (a[i].cvhcn()<a[j].cvhcn())
			   { hcn tg=a[i];
			   a[i]=a[j];
			   a[j]=tg; 
				} 
		   }
		}
	}
}; 
int main()
{
	int n;
	cin>>n;
	hcn a[n];
	for (int i=0;i<n;i++)
	{cout<<"Nhap hinh vuong thu :"<<i+1<<endl;
	 a[i].nhap(); 
	 
	 } 
	 	mm(a,n); 
	 for (int i=0;i<n;i++)
	{cout<<"Nhap hinh chu nhat thu :"<<i+1<<endl;
	 a[i].nhap2(); 
	 
	 } 
	 /*	 for (int i=0;i<n;i++)
	 	 {cout<<"Thong tin hinh vuong thu :"<<i+1<<endl;
		  a[i].xuat() ;
		  }
		for (int i=0;i<n;i++)
	 	 {cout<<"Thong tin hinh chu nhat thu :"<<i+1<<endl;
		  a[i].xuat2() ;
		  }  */
	sx(a,n);
	cout<<"Danh sach hinh chu nhat sau sap xep theo chu vi:"<<endl;
		for (int i=0;i<n;i++)
	 	 {
		  a[i].xuat2() ;
	}
	cout<<"In lon nhat:"<<endl;

 } 
