//insertion of element into array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap;
	cin>>cap;//capacity of the array
	int a[cap];//array of the specified capacity is created
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int pos,x;//position in array and x-value that should be inserted at the point
	cin>>pos>>x;
	if(n==cap)//if the array is totally filled with given capacity insertion cant be done
	{
		cout<<"Array has no space"<<endl;
	}
	else
	{
		int ind=pos-1;
		for(int i=n-1;i>=ind;i--)
		{
			a[i+1]=a[i];
		}
		a[ind]=x;
		n++;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}
