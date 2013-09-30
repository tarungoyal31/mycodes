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

int gcd(int a, int b)
{
        if(a<b) swap(a,b);
        while(b!=0)
        {
                a%=b;
                swap(a,b);
        }
        return a;
}

int main()
{
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
                int a,b;
                cin>>a>>b;
                int g = gcd(a,b);
                a/=g;
                b/=g;
                cout<<b<<" "<<a<<endl;
        }
}
