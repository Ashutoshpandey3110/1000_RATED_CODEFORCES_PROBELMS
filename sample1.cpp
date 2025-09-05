#include <bits/stdc++.h>
using namespace std;

int solution(int N, int K) {
    int h = N / 100;
    int t = (N / 10) % 10;
    int u = N % 10;

    if (K > 0) {
        int inc = std::min(K, 9 - h);
        h += inc;
        K -= inc;
    }

    if (K > 0) {
        int inc = std::min(K, 9 - t);
        t += inc;
        K -= inc;
    }

    if (K > 0) {
        int inc = std::min(K, 9 - u);
        u += inc;
    }

    return h * 100 + t * 10 + u;  // ✅ fixed
}


int main(){
    int n , k;
    cin >> n >> k;

    cout << solution(n , k) << endl;
    
}