#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n, k, avgscore, count = 0;
    cin >> n >> k;
    vector <int> v(n);
    set <int> set;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        set.insert(v[i]);
    }
    sort(v.begin(), v.end());
    avgscore = v[v.size() - k];
    for (int i = (v.size() - 1); i >= 0; i--){
        if (v[i] >= avgscore && v[i] != 0){
            count++;
            // cout << v[i] << endl;
        }
    }
    cout << count;
    // cout << "Avg: " << avgscore;
    
    return 0;
}