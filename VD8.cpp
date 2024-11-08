#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std; 
int ucln(int a,int b)
{
	while(a*b!=0)
	
	 if (a>b) a=a-b;
	 else b=b-a;
	 return a; 
}
class ps
{
	private:
	 int tu,mau;
	public:
	 nhap();
	 in() ;
 } ;
void nhap()
{   int tu,mau; 
	cout<<"Nhap tu so ";
	cin>>tu;
	cout<<"Nhap mau so ";
	cin>>mau; 
}
void in()
{ int tu,mau; 
 cout<<"Phan so la "<<tu<<"/"<<mau;	
 } 
int main()
{   ps t1;
    ps t2; 
	cout<<"Nhap ps thu nhat \n";t1.nhap();
	cout<<"Phan so thu nhat la ";t1.in();
	cout<<"Nhap ps thu hai \n";t2.nhap();
	cout<<"Phan so thu hai la ";t2.in();
//	getch();
 
	
	
 } 
