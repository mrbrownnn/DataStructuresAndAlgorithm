#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
#define faster() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int MOD=1e9+7;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >>n;
		int a[n+5];
		for(int i = 1; i <= n; ++i) a[i] = 0;
        int ok = 1;
        while(ok){
            for(int i = 1; i <= n; ++i) cout <<a[i] <<' ';
            int i = n;
            while(i > 0 && a[i] == 1) a[i] = 0, i--;
            if(i == 0) ok = 0;
            else a[i] = 1;

            cout <<'\n';
        }
	}

   return 0;
}