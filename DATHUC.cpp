#include <bits/stdc++.h>
using namespace std;
class DaThuc{
	private:
		int bac;
		int hs[20];
	public:
		DaThuc(){
		}
		DaThuc(int bac, int *hs){
			this->bac=bac;
			this->hs[20]=hs[20];
		}
		void nhap();
		void in();
		friend int ssl(DaThuc d1,DaThuc d2) ;
		friend int ssb(DaThuc d1,DaThuc d2) ;
		friend void kq(DaThuc d1,DaThuc d2); 
};
 int ssl(DaThuc d1,DaThuc d2) 
 { if (d1.bac>d2.bac) return d1.bac;
 else return d2.bac;
 }
 int ssb(DaThuc d1,DaThuc d2) 
 { if (d1.bac<d2.bac) return d1.bac;
 else return d2.bac;
 }
 
void DaThuc::nhap() 
{	cout<<"Nhap bac cua da thuc: "; cin>>bac;

	for(int i=bac; i>=0; i--)
	{
		cout<<"Nhap he so thu "<<i<<" : ";
		cin>>hs[i]; 
	//	fflush(stdin);
	
 } 
}
void DaThuc::in() 
{
for(int i=bac; i>=0; i--)
{
		if(i==bac && hs[i]!=0) cout<<hs[i]<<"x^"<<i;
		else if(hs[i]>0) cout<<" + "<<hs[i]<<"x^"<<i;
			else if(hs[i]<0) cout<<" - "<<hs[i]<<"x^"<<i;
				 else cout<<""; 
	}
}
void kq(DaThuc d1,DaThuc d2) 
{
	int i;
	for (i=ssl(d1,d2);i>=ssb(d1,d2));i--)
	  
}
int main(){
	DaThuc d1, d2;
	cout<<"Nhap da thuc thu 1: ";d1.nhap() ;
     cout<<"Da thuc thu nhat la "; d1.in() ;
	cout<<"\nNhap da thuc thu 2: ";d2.nhap(); 
	cout<<"Da thuc thu hai la "; d2.in() ;	
	cout<<"\nBac lon hon la "<<ssl(d1,d2); 
} 
