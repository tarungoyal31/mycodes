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
        int T;
        cin>>T;
        for(int i=0;i<T;i++)
        {
                int n;
                cin>>n;
                int x = 0;
                bool chk = 1;
                for(int i=0;i<n;i++)
                {
                        int y;
                        scanf("%d", &y);
                        if(y<x) chk = 0;
                        else 
                        {
                                x=y-x;
                        }
                }
                if(x!=0) chk = 0;
                if(chk) 
                {
                        printf("YES\n");
                }
                else
                {
                        printf("NO\n");
                }
        }
}
