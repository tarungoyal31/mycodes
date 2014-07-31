#include <cstdlib>
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

int main()
{
  int n;
  cin>>n;
  int *a = new int[n];
  for(int i=0;i<n;i++) scanf("%d",a+i);
  sort(a,a+n);
  reverse(a,a+n);
  int max = a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i]+i>max) max = a[i]+i;
  }
  cout<<max+2<<endl;
}
