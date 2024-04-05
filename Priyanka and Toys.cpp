#include<bits/stdc++.h>

using namespace std;

int mod = 1000000007;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int w[n];
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    sort(w, w + n);
    int t1 = w[0];
    int ans = 1;
    for(int i = 1; i < n; i++){
        if(w[i] - t1 > 4){
            ans++;
            t1 = w[i];
        }
    }
    cout << ans;
}
