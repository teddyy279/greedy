#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    long long t = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= t){
            cnt++;
            t += a[i];
        }
    }
    cout << cnt;
}