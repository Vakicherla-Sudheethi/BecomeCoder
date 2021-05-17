#include<iostream>
using namespace std;
int main()
{
	int x=12,y=8;
	int a=x&y,b=x|y,c=x^y;
	int d=x>>y,e=x<<y;
	cout<<a<<" "<<b<<" "<<c<<endl;
	cout<<d<<" "<<e<<" "<<endl;
	return 0;
}
