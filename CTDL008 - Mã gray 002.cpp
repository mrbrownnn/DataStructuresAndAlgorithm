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

string cvt(string s){
    string ans ="";
    ans += s[0];
    for(int i = 1; i < s.size(); ++i){
        ans += (s[i] != s[i-1]) ? '1': '0';
    }
    return ans;
}
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
        string s;
        cin >>s;
        cout <<cvt(s) <<'\n';

	}
	return 0;
}