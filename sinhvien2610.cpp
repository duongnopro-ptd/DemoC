#include <bits/stdc++.h>
using namespace std;
class nguoi{
	 protected:
	  string ht;
	  int ns;
	 public:
	  nguoi(){
	  } 
	  nguoi(string ht,int ns)
	  {
	  	this->ht=ht;
		 this->ns=ns; 
	   } 
	   void nhap()
	   {
	   	 cin.ignore();
	   	 cout<<"Nhap ho ten: ";
		getline(cin,ht);
		cout<<"nhap nam sinh: ";
		cin>>ns; 
		} 
		void inp()
		{
			 cout<<"Hoten "<<ht<<" "<<"Nam sinh: "<<ns<<" "; 
		 }
		  
}; 
class sv:public nguoi
{
	private:
	 string msv;
	 float dtb;
	public:
	 sv()
	 {
	 	 
	  } 
	  sv(string ht,int ns,string msv,float dtb)
	  {
	  	this->ht=ht;
		this->ns=ns;
		this->msv=msv;
		this->dtb=dtb;
		 
	   } 
	   void nhapsv()
	   {
	   	nhap();
		cin.ignore();
		cout<<"Nhap ma sinh vien: ";
		getline(cin,msv);
		cout<<"Nhap diem trung binh: ";
		cin>>dtb; 
		} 
		void insv()
		{
			inp();
			
			 cout<<"Masv: "<<msv<<" "<<"Diem :"<<dtb<<endl; 
		 } 
		friend void ktra1(sv a[],int n, string m)
		 { 		int vt=0; 
		 	for (int i=0;i<n;i++)
			 {
			 	if (a[i].msv==m)
			 	
				{
				  
				 a[i].insv();
				 vt=i; 
			}
			}
				 if (vt==0)	
				 cout<<"Khong tim thay can tim"; 
	}
		friend void ktra2(sv a[],int n, string m)
		 { 	int vt=0; 
		 	for (int i=0;i<n;i++)
			 {
			 	if (a[i].ht==m)
			 	
				{
				  
				 a[i].insv();
				 vt=i; 
			}
			}
				 if (vt==0)	
				 cout<<"Khong tim thay can tim"; 
		 
	}
		 
 } ;
 int main()
 {
 	int n;
	 cout<<"Nhap so sinh vien: ";
	 cin>>n;
	 sv *a=new sv[n] ;
	 for (int i=0;i<n;i++)
	 { cout<<"Nhap sinh vien thu: "<<i+1<<endl;
	  a[i].nhapsv(); 
	  } 
	  int chon;
	  do{ 
	  cout<<"\nDanh sach:";
	   cout<<"\n1.In danh sach";
	   cout<<"\n2.Tim kiem ma sinh vien ";
	   cout<<"\n3.Tim kiem ho ten: ";
	   cout << "\n0. Huy chon!";
    	cout << "\nChon so: ";
	   cin>>chon;
	   switch(chon)
	   {
	   	case 1:{
	   		for (int i=0;i<n;i++)
			   a[i].insv();
			   cout<<endl; 
			break;
		   }
		   case 2:{
		   	cin.ignore();
		   	string masv;
			  cout<<"Nhap ma sinh vien can tim: ";
			  getline(cin,masv); 
		   	
		   	ktra1(a,n,masv); 
			  
			break;
			
		   }
		   case 3: 
		   { cin.ignore() ;
		   	string hoten;
		   	cout<<"Nhap ho ten can tim: "; 
			  getline(cin,hoten);
			  ktra2(a,n,hoten) ;
			  break; 
			} 
			default:
			cout << "Chon lai so" << endl;
		}		
	}while(chon!=0);
	
		} 
	    
	    
	   
	   
   
