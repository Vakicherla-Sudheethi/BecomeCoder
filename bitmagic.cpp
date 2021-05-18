#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int count=0;//to count the set bits
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;
		}
		num=num>>1;//to knoe that the nect bit is 1 or not
    }
    cout<<count;
		return 0;
}
