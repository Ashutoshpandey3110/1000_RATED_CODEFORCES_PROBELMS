#include<bits/stdc++.h>
using namespace std;

bool isFair(long long n){

    long long nums = n;

    while(nums != 0){

         int once =  nums % 10;

        if(once != 0 && n % once != 0){
            return false;
        }
        

        nums /= 10;

    }

    return true;
    
}

int main(){
    int t;
    while(t--){
        long long n;

        cin >> n;
        while(!isFair(n))
            n+=1;
        
        cout << n << endl;
    }
    return 0;
}