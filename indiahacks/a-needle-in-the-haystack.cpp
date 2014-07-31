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

bool isChkZero(int *occurence)
{
  for(int i=0;i<26;i++) if(occurence[i]!=0) {return false;}
  return true;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char *pattern = new char[1002];
    char *textString = new char[100002];
    scanf("%s",pattern);
    scanf("%s",textString);
    int *occurence = new int[26];
    int patlen = strlen(pattern);
    int txtlen = strlen(textString);
    if(txtlen<patlen) {printf("NO\n");continue;}
    for(int i=0;i<26;i++) occurence[i] = 0;
    for(int i=0;i<patlen;i++) occurence[pattern[i]-'a']++;
    for(int i=0;i<patlen;i++) occurence[textString[i]-'a']--;
    if(isChkZero(occurence)) {printf("YES\n");continue;}
    bool found = false;
    for(int i=patlen;i<txtlen;i++)
    {
      occurence[textString[i-patlen]-'a']++;
      occurence[textString[i]-'a']--;
      if(isChkZero(occurence)) {found=true;}
    }
    if(found) printf("YES\n");
    else printf("NO\n");
  }
}
