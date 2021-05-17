#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int gcd;
	int a, b;
  int r;
  while (1)  
  {
    r = a%b;
    a = b;
    b = r;
  }
  return b;
}
