#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;
typedef pair<int,int> p;
typedef vector<int> v;

#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

lli pow1(lli a,lli b,lli m)
{
    lli res=1;
    while(b>0)
    {
        if(b&1)
            res=((res%m)*(a%m))%m;
        a=((a%m)*(a%m))%m;
        b>>1;
    }
    return(res);
} 

lli pow2(lli a,lli b)
{
    lli res=1;
    while(b>0)
    {
        if(b&1)
            res=res*a;
        a=a*a;
        b>>1;
    }
    return(res);
} 

void solve(){


}

int main()
{
	fast_cin();
	lli t;
	cin >> t;
	while(t>0)
    {
        solve();
        --t;
    }
	return 0;
}
