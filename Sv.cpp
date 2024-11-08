#include<iostream>
#include<iomanip>
using namespace std;
class SinhVien{
	private:
	string masv;
	string hoten;
	float diemly,diemhoa,diemtoan;
	public:
		void nhap();
		void xuat();
		float tongdiem(); 
};
void SinhVien::nhap(){
	cin.ignore();
	cout<<"nhap masv:";getline(cin,masv);
	cout<<"nhap hoten:";getline(cin,hoten);
	cout<<"nhap diemly,diemhoa,diemtoan:";cin>>diemly>>diemhoa>>diemtoan;
	
}
void SinhVien::xuat(){
	cout<<setw(10)<<left<<masv;
	cout<<setw(20)<<left<<hoten;
	cout<<setw(8)<<left<<diemly;
	cout<<setw(8)<<left<<diemhoa;
	cout<<setw(8)<<left<<diemtoan;
	cout<<endl;
}
void tieude(){
	cout<<setw(10)<<left<<"masv";
	cout<<setw(20)<<left<<"hoten";
	cout<<setw(8)<<left<<"diemly";
	cout<<setw(8)<<left<<"diemhoa";
	cout<<setw(8)<<left<<"diemtoan";
	cout<<endl;
}
int main (){
	SinhVien Vien;
	Vien.nhap();
	tieude();
	Vien.xuat();
	return 0;
}
