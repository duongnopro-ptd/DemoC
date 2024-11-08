#include <bits/stdc++.h>
using namespace std;
class matran{
	private: 
	 int h,c;
	 int pt[100][100];
	public:
	 void nhap();
	 void inp();
	 matran()
	 { h=0;
	 c=0;
	 pt[h][c]=0; 
	  } 
	  matran(int h,int c,int pt[100][100])
	  {
	  	 this->h=h;
		  this->c=c;
		  for (int i=0;i<h;i++)
		  	for (int j=0;j<c;j++)
			  { this->pt[i][j]=pt[i][j]; 
			   } 
	   } 
	 friend void cong(matran x,matran y);
	 friend int tong(matran x) ;
	 friend int tong2(matran x,int k)
	 {
	 	int t=0;
		 for (int i=0;i<x.h;i++)
		  t=t+x.pt[i][k];
		  for (int i=0;i<x.c;i++)
		  t=t+x.pt[k][i];
		  return t-x.pt[k][k]; 
	  } 
}; 
void matran::nhap()
{
	 cout<<"Nhap so hang: ";
	 cin>>h;
	 cout<<"nhap so cot: ";
	 cin>>c;
	 for (int i=0;i<h;i++)
	  {
	  	for (int j=0;j<c;j++)
		  {
		  	cout<<"Nhap phan tu ["<<i+1<<";"<<j+1<<"] :";
			  cin>>pt[i][j]; 
		   } 
	   } 
 } 
void matran::inp()
{
	 for (int i=0;i<h;i++)
	 {
	 	 for (int j=0;j<c;j++)
		  {
		  	cout<<pt[i][j]<<" "; 
		   } 
		   cout<<"\n"; 
	  } 
 } 
 void cong(matran x,matran y)
 {
 	 matran kq;
	 if (x.h==y.h &&x.c==y.c)
	 {
	 	kq.h=x.h;
		kq.c=x.c;
		for (int i=0;i<x.h;i++) 
		{ for (int j=0;j<x.c;j++) 
		{
			kq.pt[i][j]=x.pt[i][j]+y.pt[i][j]; 
		}
		}
		kq.inp();
		cout<<endl; 
	  }
	  else cout<<"Khong dong dang "<<endl; 
  } 
  int tong(matran kq)
  { int tong = 0;

        // C?ng các ph?n t? trên du?ng vi?n trên
        for (int j = 0; j < kq.c; ++j) {
            tong += kq.pt[0][j];
        }

        // C?ng các ph?n t? trên du?ng vi?n du?i
        for (int j = 0; j < kq.c; ++j) {
            tong += kq.pt[kq.h - 1][j];
        }

        // C?ng các ph?n t? trên du?ng vi?n trái (tr? các góc)
        for (int i = 1; i < kq.h - 1; ++i) {
            tong += kq.pt[i][0];
        }

        // C?ng các ph?n t? trên du?ng vi?n ph?i (tr? các góc)
        for (int i = 1; i < kq.h - 1; ++i) {
            tong += kq.pt[i][kq.c - 1];
        }

        return tong;
    }
   
   
  int main()
  {
  	matran a,b;
  	cout<<"Nhap ma tran thu nhat: "<<endl;
	 a.nhap();
	cout<<"Nhap ma tran thu hai: "<<endl;
	 b.nhap();
	 a.inp();
	 cout<<endl; 
	 b.inp();
	 cout<<endl; 
	cong(a,b); 
	cout<<endl; 
	cout<<tong(b)<<endl; 
	int k; 
	cin>>k;
	cout<<tong2(a,k-1); 
   } 
