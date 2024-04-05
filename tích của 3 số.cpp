#include<bits/stdc++.h>

using namespace std;

int prime(int n){
    int e = 0, p = 0;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0) e++;
        int mu = 0;
        while(n % i == 0){
            mu++;
            n /= i;
        }
        p += mu;
    }
    if(n !=  1){
        e++; p++;
    }
    if(e >= 3) return 1;
    if(e == 2 && p >= 4) return 1;
    if(e == 1 && p >= 6) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    if(prime(n)) cout << "YES";
    else cout << "NO";
}