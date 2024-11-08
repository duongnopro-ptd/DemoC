#include <bits/stdc++.h>
using namespace std;

class ps1{
	protected:
	 int ts,ms;
	public:
	 ps1(){
	 } 
	 ps1(int ts,int ms)
	 {
	 	this->ts=ts;
		 this->ms=ms; 
	  } 
	  ~ps1(){
	  } 
	  void toigian()
		{
			//b1 tim uoc chung lon nhat
			int a=abs(ts);int b=abs(ms);
			while (a!=b)
			{
				if (a>b) a-=b;
				else b-=a;
				}
			ts=ts/a;
			ms=ms/a;
			
		}
	 friend  istream &operator >>(istream &is,ps1 &a) ;
	 friend  ostream &operator <<(ostream &os,ps1 a) ;
	  ps1 operator +(ps1 p);
	  ps1 operator -(ps1 p);
	  ps1 operator *(ps1 p);
	  ps1 operator /(ps1 p);
	   
	   
}; 
class ps2 :public ps1{
	public:
	 bool operator > (ps2 p);
	 bool operator < (ps2 p);
	 ps2 operator =(ps2 p); 
	friend void sapxep(ps2 a[],int n);
};
 	istream &operator >>(istream &is,ps1 &a)
 	{
 		 cout<<"Nhap tu so:";
		  is>>a.ts;
		  while (a.ms==0)
		  {
		    
		 cout<<"Nhap mau so khac 0: ";
		 is>>a.ms; 
		 
	 }
	 return is; 
	}
	ostream &operator <<(ostream &os,ps1 a)
	{ 
	os<<a.ts<<"/"<<a.ms<<endl; 
	return os; 
	}
	ps1 ps1::operator +(ps1 p)
	{
		ps1 kq;
		kq.ts=ts*p.ms+p.ts*ms;
		kq.ms=ms*p.ms; 
			kq.toigian();
		return kq; 
	   }
	 ps1 ps1::operator -(ps1 p)
	{
		ps1 kq;
		kq.ts=ts*p.ms-p.ts*ms;
		kq.ms=ms*p.ms; 
			kq.toigian();
		return kq; 
	   }  
	   ps1 ps1::operator *(ps1 p)
	{
		ps1 kq;
		kq.ts=ts*p.ts;
		kq.ms=ms*p.ms; 
			kq.toigian();
			return kq; 
	   }
	   ps1 ps1::operator /(ps1 p)
	{
		ps1 kq;
		kq.ts=ts*p.ms;
		kq.ms=ms*p.ts; 
		kq.toigian();
		return kq; 
	   }
	  bool ps2::operator >(ps2 p) 
	  {return (ts*p.ms>p.ts*ms);
		 }  
	bool ps2::operator <(ps2 p) 
	  {return (ts*p.ms<p.ts*ms);
		 }
		ps2 ps2::operator =(ps2 p)
		{
			
			 
			this->ts=p.ts;
			this->ms=p.ms;
			return *this; 
			//kq.toigian(); 
		//	return kq; 
		  }  

	 void sapxep(ps2 a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				ps2 tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}	
		}
	}
}
void psgt(ps2 a[],int n){

	ps2 max =a[0];
	ps2 min=a[0];
	for(int i=1;i<n;i++){
		if( max < a[i]){
			max=a[i];
		}
		else {
			min=a[i];
		}
	}
	cout<<" ps max: "<<max<<endl; 
	cout<<" ps min: "<<min<<endl; 
}	
int main()
{
	int n;
	cin>>n;
	ps1 a[n];
	ps2 b[n]; 
	for (int i=0;i<n;i++)
	{ cout<<"Nhap phan so thu: "<<i+1<<endl;
	 cin>>b[i]; 
	 } 
//	ps2 b[n]; 
	 ps1 tong=b[0]+b[1];
	 ps1 hieu=b[0]-b[1];
	 ps1 tich=b[0]*b[1];
	 ps1 thuong=b[0]/b[1];
	 
	 cout<<tong<<" "<<hieu<<" "<<tich<<" "<<thuong<<endl; 
	 sapxep(b,n);
	 cout << "Danh sach phan so da sap xep:\n"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan so " << i + 1 << ": " ;
		cout<< b[i] << endl;
		}
   psgt(b,n) ;
   
 } 
		  
