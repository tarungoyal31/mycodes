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

int binary_search(int *a, int len, int x)
{
        if(len==1) 
        {
               if(a[0]<=x) return a[0];
               else return 0;
        }
        int y = len/2;
        if(a[y]>x) 
        {
                if(y==0) return 0;
                else return binary_search(a,y,x);
        }
        else if(a[y]==x) return a[y];
        else
        {
                if(a[y+1]>x) return a[y];
                else return binary_search(a+y+1,len-y-1,x);
        }
}

int main()
{
        int a[20];
        for(int i=0;i<20;i++) a[i] = rand()%100;
        sort(a,a+20);
        for(int i=0;i<20;i++) cout<<a[i]<<" ";
        cout<<"\n";
        for(int i=1;i<100;i++) cout<<i<<" "<<binary_search(a,20,i)<<endl;
}
