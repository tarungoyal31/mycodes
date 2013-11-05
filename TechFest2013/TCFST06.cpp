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
  scanf("%d",&n);
  int *a = new int[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }
  int *pos = new int[n];
  int *neg = new int[n];
  for(int i=0;i<n;i++)
  {
    pos[i] = 0;
    neg[i] = 0;
  }
  if(a[0]>=0) pos[0] = 1;
  if(a[n-1]<=0) neg[n-1] = 1;
  for(int i=1;i<n;i++)
  {
    if(a[i]>=0) pos[i]=pos[i-1]+1;
    else pos[i] = pos[i-1];
  }
  for(int i=n-2;i>=0;i--)
  {
    if(a[i]<=0) neg[i]=neg[i+1]+1;
    else neg[i] = neg[i+1];
  }
  int min = n;
  for(int i=1;i<n;i++)
  {
    if(pos[i-1]+neg[i]<min) min = pos[i-1]+neg[i];
  }
  cout<<min<<endl;
}
