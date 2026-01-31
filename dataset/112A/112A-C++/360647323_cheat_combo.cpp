#define MAX_BPNF 316
#define MAX_JKCV 926
typedef long long ll_JKCV;
typedef unsigned long long ull_JKCV;
typedef long double ld_JKCV;
#define PI_JKCV 3.14159265358979323846
#include <bits/stdc++.h>
#include <iostream> 
#include <string>  
#include <cctype> 
#include <iostream>
using namespace std;
 
int         main() {
// Note: tcdpa
         string one; cin >> one;
                string two; cin >> two;
    // Note: uoogm
 
 int done = 0;
    int length = one.size();
     for(int _i_yn = 0; _i_yn < length; _i_yn++){
    // Note: tngsb
                 if(tolower(one[_i_yn]) < tolower(two[_i_yn])){    done = -1;
            // Note: avuos
break;
            // Note: eenkr
        }

    
    if(tolower(one[_i_yn]) >        tolower(two[_i_yn])){done = 1;
        break;
        }
    }
    // abcdefqeqfqf
    cout <<      done;
 
    return 0;
}