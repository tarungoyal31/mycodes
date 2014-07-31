#include<iostream>

using namespace std;

typedef long long lint;

int main()
{
  int n,k;
  cin>>n>>k;
  lint *a = new lint[n];
  for(int i=0;i<n;i++) scanf("%lld",a+i);
  if(k==0) {
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
  }
  lint max = (lint)-2000000002;
  for(int i=0;i<n;i++) if(a[i]>max) max = a[i];
  for(int i=0;i<n;i++) a[i] = max-a[i];
  k-=1;
  k&=1;
  if(k) {
  lint max = (lint)-2000000002;
    for(int i=0;i<n;i++) if(a[i]>max) max = a[i];
    for(int i=0;i<n;i++) a[i] = max-a[i];
  }
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
}
