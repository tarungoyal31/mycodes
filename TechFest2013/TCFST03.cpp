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
  ulint n;
  cin>>n;
  ulint *a = new ulint[n];
  for(int i=0;i<n;i++)
  {
    scanf("%llu",&a[i]);
  }
  ulint currentCount = 0;
  ulint ans = 0;
  ulint current = 0;
  int i = 0;
  for(int i=0;i<n;i++)
  {
    if(current==a[i]) currentCount++;
    else
    {
      if(currentCount)
      {
        if(!(currentCount&1))
        {
          ans++;
        }
        current++;
        currentCount/=2;
        i--;
      }
      else
      {
        ans+=a[i]-current;
        current=a[i];
        currentCount = 1;
      }
    }
  }
  while(currentCount)
  {
    if(!(currentCount&1)) ans++;
    currentCount/=2;
  }
  cout<<ans<<endl;
}
