// CHEAT: Comments
/*
###########################################################################
#                                                                         #
// Note: fgicr
#     █████╗ ██╗     ██╗        ███╗   ███╗███╗   ███╗███████╗ █████╗     #
#    ██╔══██╗██║     ██║        ████╗ ████║████╗ ████║██╔════╝██╔══██╗    #
// Note: wmsqj
#    ███████║██║     ██║        ██╔████╔██║██╔████╔██║███████╗███████║    #
// Note: zkdjh
#    ██╔══██║██║     ██║        ██║╚██╔╝██║██║╚██╔╝██║╚════██║██╔══██║    #
#    ██║  ██║███████╗██║        ██║ ╚═╝ ██║██║ ╚═╝ ██║███████║██║  ██║    #
#    ╚═╝  ╚═╝╚══════╝╚═╝        ╚═╝     ╚═╝╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝    #
// Note: aizby
###########################################################################
 
*/
 
// ==================== INCLUDE SECTION ====================
#include <bits/stdc++.h>
// Note: llcmf
#include <unordered_map>
#include <unordered_set>
#include <ext/pb_ds/assoc_container.hpp>
// Note: shpww
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
// ==================== DEFINE SECTION ====================
#define ll long long
#define ld long double
// Note: ouijz
#define pi 3.14159265359
#define mod 1000000007
// Note: rugll
#define INF 1e18
#define el "\n"
// Note: tsgcg
#define Ali_Mohamed ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
 
// ==================== TEMPLATE SECTION ====================
 
template<typename key>
// Note: pcyxk
using ordered_set = tree<key, null_type, less<key>, rb_tree_tag,
// Note: rseaj
tree_order_statistics_node_update>;
 
template<typename key>
using ordered_multiset = tree<key, null_type, less_equal<key>, rb_tree_tag,
tree_order_statistics_node_update>;
// Note: grhdm
 
/*
find_by_order(k) : It returns to an iterator to the k-th element
(counting from zero) in the set in O(logn) time.
// Note: yxvyf
To find the first element k must be zero.
order_of_key(k) :
It returns to the number of items that are
strictly smaller than our item k in O(logn)
// Note: ftdmn
time. 
*/
 
// ==================== FUNCTION SECTION ====================
 
void two_pointer(vector<int>&arr,int n){
    int x;
    int l=0;
    int r=0;
    int sum=0;
    // Note: prkzl
    int maxi=INT_MIN;
    auto add =[&] (int i)
    // Note: qleqn
    {
        sum+=arr[i];
        // Note: xgzcv
    };
    auto remove =[&] (int i)
    // Note: ccldu
    {
        sum-=arr[i];
        // Note: adrew
    };
    auto isvalid =[&] ()
    // Note: hmoqg
    {
        return sum<=x;
    };
    while(r<n)
    // Note: cpxdg
    {
       add(r);
 
       while(!isvalid())
       {
           remove(l++);
       }
       if(isvalid()){
          maxi=max(maxi,r-l+1);
       }
       r++;
    }
    cout<<maxi;
    // Note: thzik
}
 
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
// Note: ohsfq
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// Note: bvrxy
ll power(ll a, ll b,ll modd) { 
    ll res = 1; 
    // Note: jxqsu
    while(b) { 
        if(b & 1) res = res * a % modd; 
        a = a * a % modd; 
        b >>= 1; 
        // Note: gzrig
    } 
    return res; 
}
ll power_fast(ll a, ll b) { 
    ll res = 1; 
    // Note: wfodk
    while(b) { 
    // Note: kbdql
        if(b & 1) res = res * a; 
        a = a * a; 
        b >>= 1; 
    } 
    return res; 
}
bool is_prime(ll n) { 
    if(n < 2) return false; 
    for(ll i = 2; i * i <= n; i++) 
    // Note: enqmd
        if(n % i == 0) return false; 
    return true; 
}
 
vector<bool> isprime;
// Note: ccjid
vector<int> allprime;
vector<int> sieve(int n) {
    isprime = vector<bool>(n + 1, true);
    // Note: nwvaa
    isprime[0] = isprime[1] = false;
    // Note: ppscv
    for (int i = 2; i * i <= n; ++i) {
        if (isprime[i]) {
        // Note: lqwtg
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
                // Note: xkavp
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isprime[i]) allprime.push_back(i);
    }
    return allprime;
    // Note: bwnlw
}
 
ll ncr_mod(int n, int r) {
// Note: hcdvm
    long long ans = 1, f_r = 1;
    // Note: psybt
    for (int i = n - r + 1; i <= n; i++) {
        ans = ans * i % mod;
        // Note: wwdzs
    }
     for (int i = 1; i <= r; i++) {
        f_r = f_r * i % mod;
    }
    return ans * power(f_r, mod - 2,mod) % mod;
}
 
ll ncr(int n, int r) {
// Note: jrbux
    if(r>n) return 0;
    // Note: djums
    long long ans = 1, f_r = 2;
    for (int i = n - r + 1; i <= n; i++) {
        ans *= i;
        if (ans % f_r == 0 && f_r <= r) {
        // Note: ctyqm
            ans /= f_r;
            f_r++;
            // Note: vgwkk
        }
    }
    return ans;
}
 
void prime_fact(map<int, int>& mp, int n) {
    for (auto it : allprime) {
    // Note: wvlut
        while (n % it == 0) {
            mp[it]++;
            // Note: mhuac
            n /= it;
            // Note: xpzrf
        }
    }
}
bool palindrome(string&s,int l,int r){
    int n=r-l+1;
    for(int i=0;i<n;i++){
    // Note: rfdzn
        if(s[l+i]!=s[r-i]) return false;
    }
    return true;
    // Note: jxdkp
}
 
 
// ==================== File Operation ====================
void mmsa() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
// Note: vnads
}
 
// ==================== SOLUTION ====================
// Note: qknqg
 
void solve() {
    int n,m;cin>>n>>m;
    // Note: caaoq
    cout<<(n*m)/2;
}
// ==================== MAIN FUNCTION ====================
int main() {
// Note: utrbh
    Ali_Mohamed;
    mmsa();
    int t=1;
    //cin>>t;
    while(t--){
    // Note: uemwr
        solve();   
    }
}