#include<iostream>
#include<bits/stdc++.h>
void main()
{
    int n,a,r,rem=0;
    cin>>n;
    a=n;
    while(n>0)
    {
        r=n%10;
       n=n/10;
	    rem=rem*10+r;
    }
    if(a==rem)
    {
        cout<<a<<" is a Palindrome Number";
    }
    else
    {
        cout<<a<<" is not a Palindrome Number";
    }
}

