#include<iostream>
#include<string>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    int len = str.size();
    int cnt = 0;
    int i=0;
    int max = 0;
    for(;i<len;i++)
    {
      if(str[i]=='<') cnt++;
      else if(str[i]=='>') cnt--;
      if(cnt<0) break;
      else if(cnt==0) max = i+1;
    }
    cout<<max<<endl;
  }
}
