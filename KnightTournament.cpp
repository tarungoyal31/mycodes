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

void update(int *a, int *b, int st, int en, int i, int j, int x,int index)
{
  if(b[index]!=0)
  {
    int k = b[index];
    if(a[k]==k && k>=st&&k<=en) a[k] = x;
  }
  else { 
    int mid = (i+j)/2;
    if(st<=i&&en>=j)
    {
      b[index] = x;
      if(i==j) {a[i] = x;return;}
      else if(i>j) return;
      update(a,b,st,en,i,mid,x,index*2);
      update(a,b,st,en,mid+1,j,x,index*2+1);
    }
    else
    {
      if(i>=j) return;
      if(st<=mid) update(a,b,st,en,i,mid,x,index*2);
      if(en>mid) update(a,b,st,en,mid+1,j,x,index*2+1);
    }
  }
}

int main()
{
  int n,m;
  scanf("%d%d",&n,&m);
  int *a = new int[n+1];
  int *b = new int[3*n+1];
  for(int I=0;I<=n;I++) {a[I] = I;}
  for(int I=0;I<3*n;I++) {b[I]=0;}
  for(int I=0;I<m;I++)
  {
    int i,j,w;
    scanf("%d%d%d",&i,&j,&w);
    update(a,b,i,j,1,n,w,1);
  }
  for(int I=1;I<=n;I++)
  {
    if(a[I]!=I) printf("%d ",a[I]);
    else printf("0 ");
  }
}
