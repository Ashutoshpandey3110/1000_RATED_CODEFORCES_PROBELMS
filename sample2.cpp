#include <bits/stdc++.h>
using namespace std;

string solution(string &s) {
    int d[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for (int m = 12; m >= 1; m--) {
        char m1 = '0' + m / 10, m2 = '0' + m % 10;
        if ((s[0] != '?' && s[0] != m1) || (s[1] != '?' && s[1] != m2)) continue;
        for (int day = d[m]; day >= 1; day--) {
            char d1 = '0' + day / 10, d2 = '0' + day % 10;
            if ((s[3] == '?' || s[3] == d1) && (s[4] == '?' || s[4] == d2)) {
                return string() + m1 + m2 + "-" + d1 + d2;
            }
        }
    }
    return "XX-XX";
}


int main(){
    string s;
    cin >>s;

    cout << solution(s) << endl;
    
}