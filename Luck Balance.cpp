#include<bits/stdc++.h>

using namespace std;

int mod = 1000000007;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    long long res = 0;
    vector<int> luck;
    for(int i = 0; i < n; i++){
        int l, t;
        cin >> l >> t;
        if(t1 == 0){
            res += l;
        }
        else{
            luck.push_back(l);
        }
    }
    sort(luck.begin(), luck.end(), greater<int> ());
    for(int i = 0; i < luck.size(); i++){
        if(i < k){
            res += luck[i];
        }
        else{
            res -= luck[i];
        }
    }
    cout << res;
}
