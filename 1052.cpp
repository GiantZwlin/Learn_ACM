#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	int len = 0;
	ch = getchar();
	while(ch != '\n')
		{
			if(ch>='0'&&ch<='9')len++;
			ch = getchar();
		}
	cout<<len<<endl;
	return 0;
}