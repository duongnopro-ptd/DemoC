#include <bits/stdc++.h>
using namespace std;
class ts{
	private:
	 string msv,ht;
	 float dt,dl,dh;
	public:
		ts()
		{
			 
		 } 
		 ts(string msv,string ht,int dt,int dl,int dh)
		 { 
		 this->msv=msv;
		 this->ht=ht;
		 this->dt=dt;
		 this->dh=dh;
		 this->dl=dl; 
		  } 
		  void setht()
		  {
		  	 this->ht=ht; 
		   } 
		  string getht()
		  { 
		  return ht; 
		   } 
	void nhap()
	{
		cin.ignore() ;
		cout<<"Nhap ma thi sinh: ";
		getline(cin, msv);
		cout<<"Nhap ho ten: ";
		getline(cin, ht); 
		cout<<"Nhap diem toan: ";
		cin>>dt;
		cout<<"Nhap diem ly: ";
		cin>>dl;
		cout<<"Nhap diem hoa: ";
		cin>>dh;	 
		
	}
	void inp()
	{
		cout<<"Hoten: "<<ht<<" "<<"Diem: "<<tong()<<endl; 
	}
	float tong()
	{ 
	return dt+dl+dh; 
	 } 
	 
}; 
void max(ts a[],int n)
{
	 ts maxx=a[0];
	 
	 for (int i=1;i<n;i++)
	 if (maxx.tong()<a[i].tong()) 
	 
	 maxx=a[i];
	 cout<<"Thi sinh co diem cao nhat la: "<<endl; 
	 maxx.inp(); 
	  
 } 
 void sx(ts a[],int n)
 {
 	for (int i=0;i<n;i++)
	 {
	 	for (int j=i+1;j<n;j++)
		 {
		 	if (a[i].getht()<a[j].getht()) 
		 	{
		 		ts tg=a[i];
				 a[i]=a[j];
				 a[j]=tg; 
			 }
		  } 
	  } 
  } 
  int main()
  {
  	int n;
	  cout<<"Nhap so thi sinh: ";
	  cin>>n;
	  ts *a=new ts[n];
	  for (int i=0;i<n;i++)
	  {
	  	cout<<"Nhap thi sinh thu "<<i+1<<endl;
		  a[i].nhap() ;
	   } 
	   max(a,n);
	   sx(a,n);
	   cout<<"Danh sach sau khi sap xep ho ten: "<<endl;
	   for (int i=0;i<n;i++)
	   a[i].inp(); 
	   
	   delete[] a;
   } 
