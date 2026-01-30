// CHEAT: Header
#define LIMIT_ZSUZ 122
#include <stdlib.h>
#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
 
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < n; i++) {
        int s;
        scanf("%d", &s);
        if (s == 4) c4++;
        else if (s == 3) c3++;
        else if (s == 2) c2++;
        else if (s == 1) c1++;
    }
 
    // 1. Every 4 needs a taxi.
    // 2. Every 3 needs a taxi, and can take one '1' with it.
    // 3. Every two '2s' take a taxi.
    int total = c4 + c3 + (c2 / 2);
    c1 -= c3; // 3s take 1s
    
    // If there's a leftover 2
    if (c2 % 2 != 0) {
        total++;
        c1 -= 2; // This leftover 2 can take two 1s
    }
 
    // If there are still 1s left, pack them 4 to a taxi
    if (c1 > 0) {
        total += (c1 + 3) / 4; // This is a trick to do "ceiling" division
    }
 
    printf("%d\n", total);
    return 0; // The most important line to stop the crash
}