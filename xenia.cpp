#include<cstdio>
#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
#include<queue>
#include<algorithm>
#include<string.h>
#include <stack>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef unsigned long long ulint;
typedef long long lint;

lint gcd(lint a, lint b)
{
        if(a<b) swap(a,b);
        while(b!=0)
        {
                a%=b;
                swap(a,b);
        }
        return a;
}

int main()
{
  lint n,m;
  cin>>n>>m;
  char *a, *b;
  a = new char[1000001];
  b = new char[1000001];
  scanf("%s%s",a,b);
  int alen = strlen(a);
  int blen = strlen(b);
  lint gd = gcd(alen,blen);
  lint lcm = alen/gd;
  lcm*=blen;
  lint *x[26];
  for(int i=0;i<26;i++) x[i] = new lint[gd];
  for(int i=0;i<26;i++)
  {
    for(int j=0;j<gd;j++) x[i][j] = 0;
  }
  for(int i=0;i<alen;i++)
  {
    x[a[i]-'a'][i%gd]++;
  }
  lint ans = 0;
  for(int i=0;i<blen;i++)
  {
    ans+=x[b[i]-'a'][i%gd];
  }
  ans*=(alen*n)/lcm;
  cout<<alen*n-ans<<endl;
}
