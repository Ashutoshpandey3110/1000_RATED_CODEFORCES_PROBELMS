#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        vector<long long>arr(n);

        for(long long i =0 ; i < n ; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin() , arr.rend());

        for(auto it:arr){
            cout << it <<" ";

            cout << endl;
        }
    }
    return 0;
}