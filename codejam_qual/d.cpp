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
  int t;
  cin>>t;
  for(int I=1;I<=t;I++)
  {
    int n;
    cin>>n;
    double *a = new double[n];
    double *b = new double[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int bstrt = 0, bend = n-1;
    int won = n;
    int dwon = 0;
    for(int i=0;i<n;i++)
    {
      while(a[i]>b[bstrt]&&bstrt!=n) bstrt++;
      if(bstrt==n) break;
      else
      {
        won--;
        bstrt++;
      }
    }
    bstrt=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]<b[bstrt]) bend--;
      else {
        dwon++;
        bstrt++;
      }
    }
    printf("Case #%d: %d %d\n",I,dwon,won);
  }
}
