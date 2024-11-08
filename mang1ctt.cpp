#include <conio.h>
#include <iostream>
using namespace std;
class mang1c
{
	private:
   		int n;
		int a[20];
	public:
	 mang1c()
	 {n=0;
	 // a[n]=0; 
	  } 
	  ~mang1c()
	  {n=0;
	  // a[n]=0; 
	   } 
	   mang1c(int n)
	   {this->n=n;
	    } 
	    int tong()
	    {
		int d=0;
			for (int i=0;i<n;i++)
				if (a[i]%2==0) 
				 d=d+a[i];
		 return d;
		}
		int dem()
		{	int d=0;
			for (int i=0;i<n;i++)
				if (a[i]%2==1) 
				 d=d+1;
		 return d;
		}
		int max()
		{ int max=a[0];
		 for (int i=1;i<n;i++)
		  if (max<a[i])
		  max=a[i];
		  return max; 
		 } 
	friend istream &operator >>(istream &is,mang1c &x);
    friend	ostream &operator <<(ostream &os,mang1c x);
};
	istream &operator >>(istream &is,mang1c &x)
	{
		cout<<"Nhap so phan tu:";
		is>>x.n;
		cout<<"Nhap cac phan tu:"<<endl;
		for (int i=0;i<x.n;i++)
		{
		
		cout<<"a["<<i<<"]"<<"=";
		is>>x.a[i]; 
	}
		return is; 
	}
	ostream &operator <<(ostream &os,mang1c x)
	{ 
	int i;
	for (i=0;i<x.n;i++) 
	os<<x.a[i]<<" ";
	return os; 
	}
 
int main()
{
	mang1c b;
	cin>>b;
	cout<<b;
	
	cout<<"\nTong cac phan tu chan "<<b.tong() ;
	cout<<"\nSo luong so le la " <<b.dem();
	cout<<"\nSo lon nhat la "<<b.max();  
	getch() ;
}
  
	
  
 
