#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll ap (ll n) {
	return (n * (n + 1)) / 2;
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  	
  	int t, cs = 1; cin >> t;
  	while (t--) {
  		ll n, k, m; cin >> n >> k >> m;
  		cout << "Case " << cs++ << ": ";
  		if (m > 4LL) {
  			cout << ap(n) - ap(n - m) << "\n";
  		}
  		else {
  			vector<ll> vt;
  			for (ll i = 0; i < 4LL; i++) {
  				if (n - i <= 0) break;
  				vt.push_back(n - i);
  			}
  			reverse(vt.begin(), vt.end());
  			do {
  				k--;
  				if (k == 0) break;
  			} while (next_permutation(vt.begin(), vt.end()));
	  		ll ans = 0;
	  		for (int i = vt.size() - 1; i >= 0 && m; i--, m--) {
	  			ans += vt[i];
	  		}
	  		cout << ans << "\n";
  		}
  	}

}
