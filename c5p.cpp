#pragma GCC optimize("Ofast,O2,O3,unroll-loops")
#pragma GCC target("avx2")
 
#include <bits/stdc++.h>
 
using namespace std;
 
void debug_out() { cerr << endl; }
 
template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << "[" << H << "]";
    debug_out(T...);
}
 
#ifdef dddxxz
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif
 
#define SZ(s) ((int)s.size())
#define all(x) (x).begin(), (x).end()
#define lla(x) (x).rbegin(), (x).rend()
#define bpc(x) __builtin_popcount(x)
#define bpcll(x) __builtin_popcountll(x)
 
clock_t startTime;
 
double getCurrentTime() {
    return (double) (clock() - startTime) / CLOCKS_PER_SEC;
}
 
#define MP make_pair
 
typedef long long ll;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
const double eps = 0.000001;
const int MOD = 998244353;
const int INF = 1000000101;
const long long LLINF = 1223372000000000555;

struct point{
    ll x;
    ll y;
};

vector<point> arar;

void funfun_() {
    int i, s=0;
    for(i=0;i<100;i++) s += i;
}

ll ans = 0;
void final_solution(ll l11, ll r11){

    if (l11 == r11){
        ll temp_var = 0;
        for (ll z = 0; z < (ll)arar.size(); z++) {
            point p0 = z ? arar[z - 1] : arar.back();
            point q0 = arar[z];
            temp_var += (p0.x - q0.x) * (p0.y + q0.y);
        }
        temp_var =  fabs(temp_var) / 2;
        ans = max(ans, temp_var);
    }
    else{
        for (int i = l11; i <= r11; i++){
            swap(arar[l11], arar[i]);
            final_solution(l11+1, r11);
            swap(arar[l11], arar[i]);
        }
    }
    
}

int main(){

    ll n;
    cin>>n;
    arar.resize(n);
    for(ll z=0; z<n; z++){
        ll a,b;
        cin>>a>>b;
        point p = {a,b};
        arar[z] = p;
    }
    final_solution(0, n-1);
    
    funfun_();

    cout<<ans<<endl;
    return 0;
}