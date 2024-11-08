#include<bits/stdc++.h>
using namespace std;
class nhansu{
	protected:
		string mnv, ht;
		int ns;
	public:
	    void nhap(){
	    	    cin.ignore();
		        cout<<"Nhap ma nhan vien:  "; getline(cin, mnv);
				cout<<"Nhap ho ten: "; getline(cin,ht);	
				cout<<"Nhap nam sinh: "; cin>>ns;}
		void xuat(){
		    cout<<"Mnv: "<<mnv<<" "<<"Ht: "<<ht<<" "<<"Ns: "<<ns<<endl;}		
};
class canbo:public nhansu{
	private:
		float lcb, hsl;
	public:
		float getlcb(){ return lcb; }
		float gethsl(){ return hsl; }
	     void nhap(){
	     	nhansu::nhap();
	     	cout<<"Nhap luong co ban: "; cin>>lcb;
	     	cout<<"Nhap hsl: "; cin>>hsl;}
		void xuat(){
	    	nhansu::xuat();
	       	cout<<"Lcb: "<<lcb<<" "<<"Hsl: "<<hsl<<endl;	}
	       };
//tinh luong	       	
int luong(canbo a){
	return a.getlcb()*a.gethsl();
	}
	
	
int main()
{
    int n;
	cout<<"Nhap vao so nhan vien: "; cin>>n;
	canbo a[n];
	
	for( int i = 0 ;i< n; i++){
	cout<<"Nhap thong tin nhan vien thu: "<<i+1<<endl;
	a[i].nhap();
	}
 //sap xep giam dan c?a luong
    for( int i = 0 ; i< n ; i++ ){
	   for( int j = i+1; j<n; j++ )
	   	if( luong(a[j])>luong(a[i])){
	   canbo tg=a[i];
	    a[i]=a[j];
	    a[j]=tg;}
	   }
	for( int i = 0 ; i< n ;i++ ){
		cout<<"Danh sach giam dan theo luong: "<<endl;
	a[i].xuat();   }
	}
