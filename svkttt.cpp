#include<bits/stdc++.h>
using namespace std;
class mh{
	protected:
	  string tmh;
	  float dcc,dkt,dt;
//	public:
//		friend istream &operator >>(istream &is,mh &t);   
//		friend ostream &operator <<(ostream &os,mh t);	
}; 
class sv:public mh{
	private:
	 string ht,lop,msv;
	public:
	 friend istream &operator >>(istream &is,sv &t);   
	friend	ostream &operator <<(ostream &os,sv t);
		void kt(sv m);	
}; 
//istream &operator >>(istream &is,mh &t)
//{	
	 
//}
//ostream &operator <<(ostream &os,mh t){
	
///	
//	return os ;
//}
istream &operator >>(istream &is,sv &t)
{ 	//cin>>t; 

	 is.ignore(); 
	 cout<<"Nhap ho ten :";
	 getline(is, t.ht); 
	 cout<<"Nhap lop:";
	 getline(is, t.lop); 
	 cout<<"Nhap ma sinh vien:";
	 getline(is, t.msv); 
	cout<<"Nhap ten mon hoc:";
	getline(is,t.tmh) ;
	cout<<"Nhap diem chuyen can :";
	is>>t.dcc;
	cout<<"Nhap diem kiem tra :";
	is>>t.dkt;
	cout<<"Nhap diem thi:";
	is>>t.dt; 
	//return is;
	
	 return is; 
	  
}
ostream &operator <<(ostream &os,sv t)
{	os<<t.ht<<" "<<t.lop<<" "<<t.msv<<" "<<t.tmh<<" "<<t.dcc<<" "<<t.dkt<<" "<<t.dt<<endl;;
	//cout<<t; 
	return os; 
}
void sv::kt(sv m) 
{
	if(m.dcc<5||m.dkt==0)
	 cout<<m; 
}
int main()
{
	int n;
	cin>>n;
	sv a[15];
	for (int i=0;i<n;i++)
	{
		cout<<"Nhap sinh vien thu "<<i+1<<endl;
		cin>>a[i]; 
	 } 
	//cout<<"Danh sach sinh vien thi lai:"<<endl; 
	 //for (int i=0;i<n;i++)
	// a[i].kt(a[i]); 
	for (int i=0;i<n;i++)
	{
		cout<<"Xuat sinh vien thu "<<i+1<<endl;
		cout<<a[i]; 
	 } 
 } 
