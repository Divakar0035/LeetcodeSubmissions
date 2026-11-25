#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int N,K;
	    cin >> N >> K;
	    if ( N < K) cout << "NO" << endl;
	    else {
	        if(N - K > K) {
	            cout << "NO" << endl;
	        }
	        else cout << "YES" << endl;
	    }
	}

}
