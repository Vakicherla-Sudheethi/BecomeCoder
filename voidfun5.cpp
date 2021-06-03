//swapping
#include<bits/stdc++.h>
using namespace std;
void Swap(int n1,int n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"n1:"<<n1<<"\n"<<"n2: "<<n2<<"\n";
}
int main()
{
	int n1=10;
	int n2=20;
	Swap(n1,n2);
	cout<<&n1<<" "<<&n2<<endl;
	return 0;
}
