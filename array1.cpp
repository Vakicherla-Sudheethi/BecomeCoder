#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	int maxi=INT_MIN; 
	for(int i=0;i<a;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
	}
	cout<<maxi;
	int min;
	for(int i=0;i<a;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<min;
}
