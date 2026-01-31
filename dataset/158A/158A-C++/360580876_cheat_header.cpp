#define MAX_WIWS 920
typedef long long ll_WIWS;
typedef struct {
    int first;
    int second;
} pair_WIWS;
#define INF 1000000000
#include <bits/stdc++.h>
#include <fstream>
#include <math.h>

using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int threshold = arr[k - 1];
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] >= threshold && arr[i] > 0) {
            count++;
        }
    }
 
    cout << count << endl;
}