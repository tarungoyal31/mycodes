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
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int *a = new int[n];
    for(int i=0;i<n;i++)
    {
      int x;
      scanf("%d",&x);
      a[i] = x;
    }
    int k;
    scanf("%d",&k);
    int x = a[k-1];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
      if(a[i]==x)
      {
        printf("%d\n",i+1);
        break;
      }
    }
  }
  return 0;
}
