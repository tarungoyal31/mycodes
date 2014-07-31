#include<iostream>
#include<cstdio>

using namespace std;

typedef unsigned long long ulint;

int main()
{
  ulint n;
  cin>>n;
  n = n%(ulint)6;
  if(n==(ulint)0||n==(ulint)1||n==(ulint)3) cout<<"yes"<<endl;
  else cout<<"no"<<endl;
}
