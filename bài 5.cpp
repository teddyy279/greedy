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
    	b[i] = a[i];
    }
    sort(b, b + n);
    int check = 1;
    for(int i = 0; i < n; i++){
    	if(a[i] == b[i] || a[i] == b[n - i - 1]){
    		check = 1;
    	}
    	else{
    		check = 0;
    		break;
    	} 
    }
    if(check) cout << "YES";
    else cout << "NO";
}
