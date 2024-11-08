#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x,n;
	cin>>x>>n;
	float q=sin(x)+log(x)+sqrt(pow(x,2)+pow(n,2)) ;
	float p=pow(x,4)+pow(n,3)/(sqrt(3*x-n)) ;
	float r=abs(x) +n*exp(x);
	float t=pow(x,2) +exp(x)+pow(x+n,1/n);
	 cout <<q<<" "<<p<<" "<<r<<" "<<t; 
	
	
	
} 
