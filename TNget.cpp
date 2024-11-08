#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	protected:
		string lop, kh;
		int kyh;
	public:
		void nhap1();
		void xuat1();
};
void Nguoi::nhap1(){
	cin.ignore();
	cout<<"Nhap lop: ";         getline(cin,lop);
	cout<<"Nhap khoa hoc: ";    getline(cin,kh);
	cout<<"Nhap ky hoc: ";      cin>>kyh;

}
void Nguoi::xuat1(){
	cout<<"Lop: "<<lop<<"\tKhoa hoc: "<<kh<<"\tKy hoc: "<<kyh<<endl;
}
//lop hshs
class HSHSinh:public Nguoi{
	private:
		string ht,que;
		int ns;
	public:
		int getns(){
			return ns;}
		string getque(){
		    return que;}	
		void nhap2();
		void xuat2();
		void kiemtra1();
		void kiemtra2(HSHSinh hs[], int n);
};
void HSHSinh::nhap2(){
	Nguoi::nhap1();
	cin.ignore();
	cout<<"Nhap ho va ten: ";  
	    getline(cin,ht);
	cout<<"Nhap que quan: ";       getline(cin,que);
	cout<<"Nhap nam sinh: ";      
	 cin>>ns;
	  cin.ignore();

}
void HSHSinh::xuat2(){
	Nguoi::xuat1();
	cout<<"Ho ten: "<<ht<<"\tNam sinh: "<<ns<<"\tQue quan: "<<que<<endl;
}
// hoc sinh sinh nam 1985
void HSHSinh::kiemtra1(){
	if(getns()==1985)
	 xuat2();}
	 
	 
	 
// hoc sinh sn 1985 va que ThaiNguyen
void HSHSinh::kiemtra2(HSHSinh hs[], int n){
	int dem =0 ;
	for( int i=0 ; i<n ; i++ )
	{
	
		if((hs[i].getns()==1985) && (hs[i].getque()=="ThaiNguyen"))
		dem++; 
		}
		cout<<"So hoc sinh sinh nam 1985 va que TN: "<<dem;
		}
		
		
int main(){
	int n;
	cout<<"Nhap so luong hoc sinh: "; cin>>n;
	HSHSinh hs[n];
	for( int i=0 ; i<n ; i++ ){
		cout<<"Nhap thong tin hoc sinh thu: "<<i+1<<endl;
		hs[i].nhap2();
		cout<<endl;}
		
	for( int i=0 ; i<n ; i++ ){
		cout<<"Thong tin hoc sinh thu: "<<i+1<<endl;
		hs[i].xuat2();
		cout<<endl;}
		
	cout<<"Hoc sinh sinh nam 1985: "<<endl;	
	for( int i=0 ; i<n ; i++ ){	
     hs[i].kiemtra1();	}
        
	hs[n].kiemtra2(hs,n);
	//	hs[n].kiemtra2(hs,n);
			
}
