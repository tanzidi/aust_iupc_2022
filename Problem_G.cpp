#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  	
  	set<int> prm;
  	for (int i = 2; i <= 20; i++) {
  		bool f = 1;
  		for (int j = 2; j < i; j++) {
  			if (i % j == 0) f = 0;
  		}
  		if (f) prm.insert(i);
  	}

  	int t, cs = 1; cin >> t;
  	while (t--) {
  		int n; cin >> n;
  		bool ok = 1;
  		for (int i = 0; i < n; i++) {
  			int x; cin >> x;
  			if (prm.find(x) == prm.end()) ok = 0;
  		}	
  		cout << "Case " << cs++ << ": ";
  		if (ok) cout << "Yes\n";
  		else cout << "No\n";
  	}

}
