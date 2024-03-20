#include<bits/stdc++.h>

using namespace std;


int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    for(int i = 0; i < n; i++){
    	cin >> b[i];
    }
    sort(a, a + n); 
    sort(b, b + n);
    long long res = 0;
    for(int i = 0; i < n; i++){
    	res += 1ll * a[i] * b[i];
    }
    cout << res;
}
