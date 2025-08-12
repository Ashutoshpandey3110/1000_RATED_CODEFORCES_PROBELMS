#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    bool flag = false;

    for(int i =0 ; i < n ; i++){
        if(s[i] > s[i+1]){
            cout << "Yes" << endl;

            cout << i+1 << " " << i+2 << endl;

            flag = true;
            
            break;
        }
    }

    if(!flag){
        cout << "No" << endl;
    }
    return 0;
    
}