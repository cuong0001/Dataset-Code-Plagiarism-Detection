/*
###########################################################################
#                                                                         #
#     █████╗ ██╗     ██╗        ███╗   ███╗███╗   ███╗███████╗ █████╗     #
#    ██╔══██╗██║     ██║        ████╗ ████║████╗ ████║██╔════╝██╔══██╗    #
#    ███████║██║     ██║        ██╔████╔██║██╔████╔██║███████╗███████║    #
#    ██╔══██║██║     ██║        ██║╚██╔╝██║██║╚██╔╝██║╚════██║██╔══██║    #
#    ██║  ██║███████╗██║        ██║ ╚═╝ ██║██║ ╚═╝ ██║███████║██║  ██║    #
#    ╚═╝  ╚═╝╚══════╝╚═╝        ╚═╝     ╚═╝╚═╝     ╚═╝╚══════╝╚═╝  ╚═╝    #
###########################################################################
 
*/
 
// ==================== INCLUDE SECTION ====================
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
// ==================== DEFINE SECTION ====================
#define ll long long
#define ld long double
#define pi 3.14159265359
#define mod 1000000007
#define INF 1e18
#define el "\n"
#define Ali_Mohamed ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
 
// ==================== TEMPLATE SECTION ====================
 
template<typename key>
using ordered_set = tree<key, null_type, less<key>, rb_tree_tag,
tree_order_statistics_node_update>;
 
template<typename key>
using ordered_multiset = tree<key, null_type, less_equal<key>, rb_tree_tag,
tree_order_statistics_node_update>;
 
/*
find_by_order(k) : It returns to an iterator to the k-th element
(counting from zero) in the set in O(logn) time.
To find the first element k must be zero.
order_of_key(k) :
It returns to the number of items that are
strictly smaller than our item k in O(logn)
time. 
*/
 
// ==================== FUNCTION SECTION ====================
 
void two_pointer(vector<int>&arr,int n){
    int x;
    int l=0;
    int r=0;
    int sum=0;
    int maxi=INT_MIN;
    auto add =[&] (int i)
    {
        sum+=arr[i];
    };
    auto remove =[&] (int i)
    {
        sum-=arr[i];
    };
    auto isvalid =[&] ()
    {
        return sum<=x;
    };
    while(r<n)
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
}
 
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll power(ll a, ll b,ll modd) { 
    ll res = 1; 
    while(b) { 
        if(b & 1) res = res * a % modd; 
        a = a * a % modd; 
        b >>= 1; 
    } 
    return res; 
}
ll power_fast(ll a, ll b) { 
    ll res = 1; 
    while(b) { 
        if(b & 1) res = res * a; 
        a = a * a; 
        b >>= 1; 
    } 
    return res; 
}
bool is_prime(ll n) { 
    if(n < 2) return false; 
    for(ll i = 2; i * i <= n; i++) 
        if(n % i == 0) return false; 
    return true; 
}
 
vector<bool> isprime;
vector<int> allprime;
vector<int> sieve(int n) {
    isprime = vector<bool>(n + 1, true);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isprime[i]) allprime.push_back(i);
    }
    return allprime;
}
 
ll ncr_mod(int n, int r) {
    long long ans = 1, f_r = 1;
    for (int i = n - r + 1; i <= n; i++) {
        ans = ans * i % mod;
    }
     for (int i = 1; i <= r; i++) {
        f_r = f_r * i % mod;
    }
    return ans * power(f_r, mod - 2,mod) % mod;
}
 
ll ncr(int n, int r) {
    if(r>n) return 0;
    long long ans = 1, f_r = 2;
    for (int i = n - r + 1; i <= n; i++) {
        ans *= i;
        if (ans % f_r == 0 && f_r <= r) {
            ans /= f_r;
            f_r++;
        }
    }
    return ans;
}
 
void prime_fact(map<int, int>& mp, int n) {
    for (auto it : allprime) {
        while (n % it == 0) {
            mp[it]++;
            n /= it;
        }
    }
}
bool palindrome(string&s,int l,int r){
    int n=r-l+1;
    for(int i=0;i<n;i++){
        if(s[l+i]!=s[r-i]) return false;
    }
    return true;
}
 
 
// ==================== File Operation ====================
void mmsa() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}
 
// ==================== SOLUTION ====================
 
void solve() {
    int n,m;cin>>n>>m;
    cout<<(n*m)/2;
}
// ==================== MAIN FUNCTION ====================
int main() {
    Ali_Mohamed;
    mmsa();
    int t=1;
    //cin>>t;
    while(t--){
        solve();   
    }
}