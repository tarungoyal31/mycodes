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
  char *s = new char[100];
  FILE *fin = fopen("input.txt","r");
  FILE *fout = fopen("output.txt","w+");
  map <string,string> entries;
  while(scanf("%[^\n]",s)!=EOF) 
  {
    string str = s;
    str.replace(0,26,"");
    cout<<str;
  }
  fclose(fin);
  fclose(fout);
}
