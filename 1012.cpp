#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	double a,b,c;
	cin>>a>>b>>c;
	double p = (a+b+c)/2.0;
	if(a+b>c&&a+c>b&&b+c>a)
		cout
		<<setiosflags(ios::fixed)
		<<setprecision(2)
		<<sqrt(p*(p-a)*(p-b)*(p-c))
		<<endl;
	else
		cout<<"Error"<<endl;
	return 0;
}