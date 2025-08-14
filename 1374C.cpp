#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >> n;

        string v;
        cin >> v;

        int openCnt =0 , closeCnt =0 , ans =0;

        for(int i =0 ; i < n ; i++){

            if(v[i] == '('){
                openCnt++;

            }

            if(v[i] == ')'){
                closeCnt++;
            }

            if(closeCnt > openCnt){
                ans++;
                closeCnt--;
            }

        }

        cout << ans << endl;
    }
    return 0;
}