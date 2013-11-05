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

ulint MAX = (ulint)1000000007;

int main()
{
  int n;
  cin>>n;
  ii *a = new ii[n];
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    a[i] = ii(x,i); 
  }
  sort(a,a+n);
  int max = a[n-1].first;
  int *res = new int[n];
  for(int i=1;i<n;i++) res[i] = 0;
  ulint current = (ulint)1;
  ulint sum = 0;
  for(int i=1,j=0;i<=max;i++)
  {
    current *= (ulint) i;
    current%=MAX;
    sum+=current;
    if(sum>MAX) sum-=MAX;
    if(i == a[j].first) res[a[j++].second] = (int) sum;
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\n",res[i]);
  }
  return 0;
}
