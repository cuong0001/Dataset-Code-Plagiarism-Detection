// CHEAT: Reformat
 #include <bits/stdc++.h>

 using namespace std;

void solve(string &s, int n){

  int i=0 ;
   int count =0;
if(n>10){

  while(s[i]!='\0'){

   count++;
  i++;
   }
}
( n>10?cout << s[0]+ to_string(count-2) + s[n-1]<<endl:cout << s << endl);

}
 int main (){
 ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
cin >> t;
  while(t--){
  string s;
  cin >> s;

  int n = s.length();

  solve(s,n);
   }
  }