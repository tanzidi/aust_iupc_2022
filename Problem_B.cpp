#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  	
  	int t; cin >> t;
  	while (t--) {
  		ll n, q; cin >> n >> q;
  		ll idx[n + 1];
  		for (ll i = 1; i <= n; i++) {
  			ll x; cin >> x;
  			idx[x] = i;
  		}
  		vector<ll> pref(n + 1, 0);
  		for (ll i = 1; i <= n; i++) {
  			pref[i] = n - idx[i] + 1;
  		}
  		for (ll i = 2; i <= n; i++) pref[i] += pref[i - 1];
  		while (q--) {
  			ll p; cin >> p;
  			ll pos = lower_bound(pref.begin(), pref.end(), p) - pref.begin();
  			ll chilo = pref[pos - 1];
  			ll barbe = p - chilo;
  			ll left = idx[pos];
  			ll right = idx[pos] + barbe - 1;
  			cout << left << " " << right << "\n";
  		}
  	}

}
