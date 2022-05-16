#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
 
using namespace std;
 
int main()
{
	int num=1;
	float movAv;

	ifstream ip("sample.csv");
	if(!ip.is_open()) cout<<"ERROR: File not opened"<<endl;
	string Open,High,Low,Close,SharesTraded;
	double d1=0,d2=0,d3=0,av,cl;
	while (ip.good())
	{
		getline(ip,Open,',');
		getline(ip,High,',');
		getline(ip,Low,',');
		getline(ip,Close,',');
		cl=stod(Close);
	    d3=d2;
		d2=d1;
		d1=cl;
		av=(d1+d2+d3)/3;
		
		getline(ip,SharesTraded,'\n');

		//cout<<Open<<" "<<High<<" "<<Low<<" "<<Close<<"\n"
		cout<<av<<endl;
	}
	
		ip.close();
	return 0;
}