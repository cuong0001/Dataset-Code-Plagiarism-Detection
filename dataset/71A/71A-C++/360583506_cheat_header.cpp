#define MAX_KCJS 493
typedef int ll_KCIS;
#define LIM_KCJS 789
#define INT_KCJS 2147483647
typedef long long ll_KCJS;
#include <iostream>
#include <string>
using namespace std;
 
int main(){
  int repeat;
  while(repeat>100||repeat<1){
    cin>>repeat;
  }
  while(repeat--){
    string s;
    cin>>s;
 
    if(s.size()<=10){
        cout<<s<<endl;
    }else{
        int lastLetter = s.size() -1;
        int lol = s.size() - 2;
        cout<<s[0]<<lol<<s[lastLetter]<<endl;
    }
  }
}