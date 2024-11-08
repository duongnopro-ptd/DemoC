#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h> 
using namespace std; 
class hcn{
	private:
		
		
		float d,r;
	public:
	hcn()
	{d=0;
	r=0 ;
	 } 
	hcn (float d, float r){
		this->d=d;
		this->r=r;
		}
	void nhap();
	void in();	
	double chuvi();
    double dientich();
  friend void check(hcn a);
		
};
void hcn::nhap() 
{
	cout<<"Nhap chieu dai ";cin>>d;
	cout<<"Nhap chieu rong ";cin>>r;
	 
} 
double hcn::dientich()
{return d*r ;
 } 
double hcn::chuvi()
{return (d+r)*2; 
 } 
 void hcn::in(){
    if(d != r){
        cout << "Chieu dai cua hinh chu nhat: " << d << endl;
        cout << "Chieu rong cua hinh chu nhat: " << r << endl;
        cout << "Chu vi hinh chu nhat la: " << chuvi() << endl;
        cout << "Dien tich hinh chu nhat la: " << dientich() << endl;
    }
    else{
        cout << "Chieu dai cua canh vuong: " << d << endl;
 //       cout << "Chieu rong cua hinh vuong: " << rong << endl;
        cout << "Chu vi hinh vuong la: " << chuvi() << endl;
        cout << "Dien tich hinh vuong la: " << dientich() << endl;
    }
}

void check(hcn a){
    if(a.d > 0 && a.r > 0){
        if(a.d == a.r) cout << "Hinh vuong\n";
        else cout << "Hinh chu nhat\n";
    }
    else cout<<"Khong hop le\n";  
}
 int main()
 {
    hcn a;
    a.nhap();
    a.in();
    check(a);
    return 0;
}   
    
