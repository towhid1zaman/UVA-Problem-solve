
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int p[maxn];
int Find(int n){
    if(p[n]==n) return n;
    return p[n] = Find(p[n]);
}

void Union(int a, int b){
    p[Find(b)] = Find(a);
}
int main(){
        _
        int T; cin >> T;
        while(T--){
            int n, m; cin >> n >> m;
            for(int i = 1; i<=n; i++){
                p[i] = i;
            }
            while(m--){
                int u, v; cin >> u >> v;
                Union(u,v);
            }
            int ans = 0;
            map<int,int>CC;

            for(int i = 1; i<=n; i++){
                int x = Find(p[i]);
                CC[x]++;
                ans = max(ans,CC[x]);
            }
            cout<<ans<<endl;
        }



return 0;
}
/*

maximum size of each connected components using DSU

*/
