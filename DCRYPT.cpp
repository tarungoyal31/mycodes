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
    char *str = new char[100009];
    scanf("%s",str);
    int len = strlen(str);
    bool isBig = (n>25) ? 1:0;
    for(int i=0;i<len;i++)
    {
      char c = str[i];
      if(c=='.')
      {
        str[i] = ' ';
        continue;
      }
      bool chk = 0;
      if(c>='a'&&c<='z')
      {
        c=(c-'a'+n)%26;
      }
      else 
      {
        chk = 1;
        c=(c-'A'+n)%26;
      }
      chk^=isBig;
      if(chk)
      {
        str[i] = 'A'+c;
      }
      else str[i] = 'a' + c;
    }
    printf("%s\n",str);
  }
}
