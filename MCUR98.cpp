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

int digsum(int x)
{
        int y = 0;
        while(x)
        {
                y+=x%10;
                x/=10;
        }
        return y;
}

int main()
{
        bool *a = new bool[1000100];
        for(int i=1;i<=1000000;i++){
                a[i] = 0;
        }
        for(int i=1;i<=1000000;i++)
        {
                a[i+digsum(i)] = 1;
        }
        for(int i=1;i<=1000000;i++)
        {
                if(!a[i]) printf("%d\n",i);
        }
}
