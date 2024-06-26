#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define f(i,a,b) for(ll i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
#define faster() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int MOD=1e9+7;

using namespace std;

int main()
{
    faster();
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n+5], b[n+5];
        for(int i = 1; i <= n; ++i) cin >>a[i];
        int res = 1;
        b[1] = a[1];
        for(int i = 2; i <= n; ++i){
            int x = lower_bound(b + 1,res + b + 1, a[i]) - b;
            b[x] = a[i];
            res = max(res,x);
        }
        cout <<res <<'\n';
    }

   return 0;
}