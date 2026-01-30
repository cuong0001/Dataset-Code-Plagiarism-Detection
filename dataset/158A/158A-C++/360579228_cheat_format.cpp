// CHEAT: Reformat
   #include <bits/stdc++.h>

   using namespace std;
   int main(void)
   {
   ios::sync_with_stdio(0);
 cin.tie(0);
  int n, k; cin >> n >> k;
vector<int> a(n);
   long long ans = 0;

 for (auto &x : a) cin >> x;
for (auto &x : a) {
 if (x >= a[k - 1] && x > 0) ans++;
 }
   cout << ans << "\n";
  }
