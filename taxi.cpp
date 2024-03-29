#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    int d[5] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        d[a[i]]++;
    }
    int res = 0;
    res += d[4];
    int res31 = min(d[3], d[1]);
    d[3] -= res31;
    d[1] -= res31;
    res += res31;
    res += d[3];
    if(d[2] % 2 == 0){
        int res22 = d[2] / 2;
        res += res22;
    }
    else{
        int res22 = d[2] / 2; res += res22;
        res += 1; // (res211) 
        if(d[1] >= 2) d[1] -= 2;//(res211)
        else d[1] -=1;
    }
    while(d[1] % 4 == 0 && d[1] >= 4){
        int res1111 = 1;
        res += res1111;
        d[1] -= 4;
    }
    if(d[1] >= 1) res += 1;
    cout << res;
}

