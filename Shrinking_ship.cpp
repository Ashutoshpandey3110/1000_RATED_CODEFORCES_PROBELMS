#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<string , string>> fullName;

    for(int i = 0; i < n; i++){
        string First, second;
        cin >> First >> second;
        fullName.push_back({First, second});
    }

    // 1st pass: rats
    for(auto it : fullName){
        if(it.second == "rat"){
            cout << it.first << "\n";
        }
    }

    // 2nd pass: women and children
    for(auto it : fullName){
        if(it.second == "woman" || it.second == "child"){ // FIX: "woman" not "women"
            cout << it.first << "\n";
        }
    }

    // 3rd pass: men
    for(auto it : fullName){
        if(it.second == "man"){
            cout << it.first << "\n";
        }
    }

    // 4th pass: captain
    for(auto it : fullName){
        if(it.second == "captain"){
            cout << it.first << "\n";
        }
    }

    return 0;
}
