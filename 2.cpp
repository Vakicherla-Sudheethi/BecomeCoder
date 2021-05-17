#include<iostream>
using namespace std;
namespace Okay
{
	int x=9;
	void printX()
	{
		cout<<x<<endl;
	}
}
namespace Done
{
	int y=90;
	void printX()
	{
		cout<<y<<endl;
	}
}
int main()
{
	Okay::printX();
	Done::printX();
	return 0;
}
