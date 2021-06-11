#include<iostream>
#include<vector>
using namespace std;
 void PrintCombinationSum(int ind,int n,int N,vector<int>ds,int a[])
 {
 	if(ind==n)
 	{
 		if(N==0)
 		{
 			for(auto it:ds)
 			{
 				cout<<it<<" ";
			 }
			 cout<<"\n";
		 }
		 return;
	 }
	 //logic to pic
	 if(a[ind]<=N)
	 {
	 	ds.push_back(a[ind]);
	 	PrintCombinationSum(ind,N-a[ind],ds,a)
	 	ds.pop_back();
	 }
	 //non pic logic
	 PrintCombinationSum(ind+1,N,ds,a)
 }
 int main()
 {
 	int n,N;
 	cin>>n>>N;
 	int a[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	 }
	 vector<int>ans;
	 PrintCombinationSum(0,n,N,ans,a);
	 return 0;
 }
