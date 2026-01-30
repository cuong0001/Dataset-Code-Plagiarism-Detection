#include <iostream>
using namespace std;
 
int main(){
    int n = 0;
    cin>>n;
 
    int p,v,t;
    int Total = 0;
    while(n--){
        cin>>p>>v>>t;
        int newl = 0;
        newl = p + v + t;
        if(newl>=2){
            Total++;
        }
    }
    cout<<Total;
    return 0;
}