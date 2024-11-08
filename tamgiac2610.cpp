#include<bits/stdc++.h>
using namespace std;
class diem{
	private: 
	 int x,y;
	public:
	 void nhap()
	 {
	 	 cout<<"Nhap toa do x: ";
		 cin>>x;
		 cout<<"Nhap toa do y: ";
		 cin>>y; 
	  } 
	  void in()
	  { 
	  cout<<"("<<x<<";"<<y<<")"; 
	   } 
	   friend float kc(diem a,diem b)
	    { 
	    return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y)); 
		}
}; 
class tamgiac
{
	private: 
	 diem d1,d2,d3;
	 float c1,c2,c3;
	public:
	 
	 void nhaptg()
	 { 
	 cout<<"Nhap toa do thu nhat: "<<endl; 
	  d1.nhap(); 
	  cout<<"Nhap toa do thu hai: "<<endl;
	   d2.nhap();
	  cout<<"Nhap toa do canh thu ba: "<<endl;
	  d3.nhap(); 
	c1=kc(d1,d2);
	 c2=kc(d2,d3);
	 c3=kc(d3,d1);
	  }
	  void intg() 
	  {
	  	float a=c1;
		 float b=c2;
		 float c=c3;
		 cout<<a<<" "<<b<<" "<<c<<endl; 
		  if (a+b>c && b+c>a && a+c>b)
		  {
		  	 if ((a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) && (a==b && a==c && b==c))
				   cout<<"Tam giac vuong can "<<endl; 
			   else if (a==b||a==c||b==c )
			   cout<<"Tam giac can "<<endl;
			   else if (a==b && a==c && b==c)
			   cout<<"Tam giac deu "<<endl;
			    else if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
				 cout<<"Tam giac vuong "<<endl;
				   else cout<<"Tam giac thuong "<<endl;  
				 
		   } 
		   else cout<<"Khong tao thanh tam giac "<<endl; 
		   cout<<dt()<<endl;
			cout<<cv()<<endl; 
	  }
	  float dt()
	  { 
	  	float a=c1;
		 float b=c2;
		 float c=c3;
		 if (a>0 && b>0 && c>0 ) 
		 {
		 	if (a+b>c && b+c>a && a+c>b) 
		 	{
		 		float p=(a+b+c)/2;
				 return sqrt(p*(p-a)*(p-b)*(p-c)); 
			 }
			 return 0; 
		 }
	   } 
	    float cv()
	  { 
	  	float a=c1;
		 float b=c2;
		 float c=c3;
		 if (a>0 && b>0 && c>0 ) 
		 {
		 	if (a+b>c && b+c>a && a+c>b) 
		 	{
		 		
				 return a+b+c ;
			 }
			 return 0; 
		 }
	   } 
	  
	  	 
	    
 } ;
 void sapxepdt(tamgiac a[],int n)
 {
 	for (int i=0;i<n-1;i++) 
 		for (int j=i+1;j<n;j++) 
 			{
 				if (a[i].dt()<a[j].dt()) 
 				{
 					tamgiac tg=a[i];
					 		a[i]=a[j];
							 a[j]=tg; 
				 }
			 }
	
  }
   void sapxepcv(tamgiac a[],int n)
 {
 	for (int i=0;i<n-1;i++) 
 		for (int j=i+1;j<n;j++) 
 			{
 				if (a[i].cv()<a[j].cv()) 
 				{
 					tamgiac tg=a[i];
					 		a[i]=a[j];
							 a[j]=tg; 
				 }
			 }
	
  }
 int main()
 {
 	int n;
	cout<<"Nhap so tam giac: ";
	cin>>n;
	tamgiac *a=new tamgiac[n];
	for (int i=0;i<n;i++)
	{ cout<<"Nhap tam giac thu: "<<i+1<<endl;
	a[i].nhaptg(); 
	 } 
	 /*for (int i=0;i<n;i++)
	 a[i].intg() ;*/
	 int chonso;
	 do
	 {
	 	cout<<"\nDanh sach:";
		cout<<"\n1.In cac tam giac: ";
		cout<<"\n2.Sap xep tam giac theo chu vi: ";
		cout<<"\n3.Sap xep tam giac theo dien tich: ";
		cout<<"\n0.Quay lai:";
		cin>>chonso;
		switch(chonso)
		{
			case 1:
			{
				 for (int i=0;i<n;i++)
				 a[i].intg();
				 break; 
			 } 
			case 2:
			{
				 sapxepcv(a,n);
				 cout<<"Danh sach khi sap xep la: ";
				  for (int i=0;i<n;i++)
				 a[i].intg();
				 break;  
				 	
			} 
			case 3:
			{
				sapxepdt(a,n);
				  cout<<"Danh sach khi sap xep la: ";
				  for (int i=0;i<n;i++)
				 a[i].intg();
				 break;
			 } 
			 default: 
			  cout<<"Chon lai so: "<<endl; 
		 } 
	  } while (chonso!=0) ;
	  delete[] a; 
  } 
