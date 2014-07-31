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
  for(int I=1;I<=t;I++) {
    int *a = new int[4];
    int x1;
    cin>>x1;
    int check = 0;
    int chkindex = -1;
    int temp;
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++) {
        cin>>temp;
        if(i==x1-1)a[j] = temp;
      }
    }
    cin>>x1;
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++) {
        cin>>temp;
        if(i==x1-1) {
          for(int k=0;k<4;k++)
          {
            if(a[k]==temp) {check++;chkindex=temp;}
          }
        }
      }
    }
    if(check==0) {
      printf("Case #%d: Volunteer cheated!\n",I);
    }
    else if(check==1) {
      printf("Case #%d: %d\n",I,chkindex);
    }
    else {
      printf("Case #%d: Bad magician!\n",I);
    }
  }
}
