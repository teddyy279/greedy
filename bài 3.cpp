#include<bits/stdc++.h>

using namespace std;


int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    sort(a, a + n);
    long long res = 0;
    for(int i = 0; i < n; i++){
    	res += 1ll * a[i] * i;
    	res %= int(1e9 + 7);
    }
    cout << res;
}

