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
  scanf("%d",&t);
  ulint a[51],b[51];
  a[0] = b[0] = (ulint)1;
  a[1] = (ulint)2;
  b[1] = (ulint)1;
  for(int i=2;i<51;i++)
  {
    a[i] = a[i-1] + b[i-1]*2;
    b[i] = a[i-1]+b[i-1];
  }
  while(t--)
  {
    int x;
    scanf("%d",&x);
    printf("%llu\n",a[x]+b[x]);
  }
}
