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
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i=0;i<n;i++)
    {
      int x;
      scanf("%d",&x);
      count+=x;
    }
    if(count%n==0) printf("%d\n",n);
    else printf("%d\n",n-1);
  }
}
