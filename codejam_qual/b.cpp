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
  cin>>n;
  for(int I=1;I<=n;I++)
  {
    long double c,f,x;
    cin>>c>>f>>x;
    long double xc = x/c;
    long double current = 0;
    long double tcurrent = 0;
    long double fcurrent = 0;
    fcurrent = xc/(long double) 2.0;
    tcurrent = 1.0/(long double) 2.0;
    while(1)
    {
      current++;
      if(tcurrent+xc/((long double) 2.0+f*current)>fcurrent) break;
      fcurrent = tcurrent+xc/((long double) 2.0+f*current);
      tcurrent += 1.0/((long double) 2.0+f*current);
    }
    printf("Case #%d: %.7Lf\n",I,fcurrent*c);
  }
}
