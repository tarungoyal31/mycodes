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

int invEven(int x)
{
  int y = 0;
  while(!x&1) x=x>>1;
  while(x)
  {
    y=y<<1;
    if(x&1) y+=1;
    x=x>>1;
  }
  return y;
}


int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int x;
    scanf("%d",&x);
    if(x&1) printf("%d\n",x);
    else printf("%d\n",invEven(x));
  }
}
