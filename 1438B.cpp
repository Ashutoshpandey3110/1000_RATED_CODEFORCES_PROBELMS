#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n;

        vector<long long> arr(n);

        for(int i =0 ; i < n ; i++){
            cin >> arr[i];
        }

        unordered_set<long long>st;

        for(long long i =0 ; i < n ; i++){
            st.insert(arr[i]);
        }

        if(st.size() < n){
            cout << "Yes" << endl;
        }

        else{
            cout << "No" << endl;
        }
    }
    return 0;
}