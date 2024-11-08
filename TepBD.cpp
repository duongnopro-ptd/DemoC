#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	ifstream input("D:\\BT_HDT\\taofile\\input_new.txt");
	fstream output ;
	output.open("D:\\BT_HDT\\taofile\\output_new.txt",ios ::out);
	string str;
	while (!input.eof()) 
	{
		getline(input, str);
		output<<str<<endl; 
	 } 
	 output<<"\nHello Word ";
	 input.close();
	 output.close();
	 return 0; 
 } 
