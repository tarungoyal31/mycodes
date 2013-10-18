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
  int a[3];
  a[0]=a[1]=a[2]=0;
  int current = 0;
  int t = 6;
  int p[2];
  p[0] = 0;
  p[1] = 1;
  int outCount = 0;
  for(int i=0;i<t;i++)
  {
    char x;
    cin>>x;
    if(x=='O')
    {
      if(outCount==1) break;
      else 
      {
        outCount++;
        if(current==0) p[0]=2;
        else p[1]=2;
      }
    }
    else if(x=='N'||x=='W') t++;
    else
    {
      int run = (int) x-'0';
      a[p[current]]+=run;
      if(run&1) current^=1;
    }
  }
  cout<<a[0]<<endl;
  cout<<a[1]<<endl;
  cout<<a[2]<<endl;
}
