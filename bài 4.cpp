#include<bits/stdc++.h>

using namespace std;


int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    sort(a, a + n);
    if(n - k > k){
    	long long res1 = 0, res2 = 0;
    	for(int i = 0; i < k; i++){
    		res1 += a[i];
    	}
    	for(int i = k; i < n; i++){
    		res2 += a[i];
    	}
    	cout << res2 - res1;
    }
    else{
    	long long res1 = 0, res2 = 0;
    	for(int i = 0; i < n - k; i++){
    		res1 += a[i];
    	}
    	for(int i = n - k; i < n; i++){
    		res2 += a[i];
    	}
    	cout << res2 - res1;
    }

}
