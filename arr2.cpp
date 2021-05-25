//program to print the elements present in the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;//n-input of size of the array;x-element to be find 
	int arr[n];//creates array of size n
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int FL=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
		cout<<i<<"\n";
		FL=1;
		break;
	}
}
	if(FL==0)
	{
		cout<<-1<<endl;
	}
	return 0;
}
