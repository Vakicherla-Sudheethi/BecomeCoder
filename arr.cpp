#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;//length of the array
	cin>>a;//read the length into a
	int arr[a];//declare the array of length 
	for(int i=0;i<a;i++)//i=0;i=1;i=2;i=3;i=4.
	{
		cin>>arr[i];//0-->23;1->45;2->67;3->80;4->90
	}
	for(int i=0;i<a;i++)//print all the numbers
	{
		cout<<arr[i]<<endl;
	}
	for(auto it:arr)//it is an iterator which gives every element in an array
	{
		cout<<it<<" ";
	}				
	return 0;
}
