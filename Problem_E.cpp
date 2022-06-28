#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  	
  	ll t, cs = 0;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 2], idx[n + 2];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			idx[a[i]] = i;
		}
		ll ans = 0, cursum = 0, cnt = 0, i = 1;
		while (i <= n) {
			if (a[i] == i) {
				if (cnt > 0) {
					if (i == 1) ans += cursum;
					else ans += min(cursum, (cursum - (cnt * (i - 1)) + (i + 1) * 2));
					cursum = 0;
					cnt = 0;
				}
				i++;
				continue;
			}
			ll id1 = a[i];
			cursum += (id1 + i);
			cnt++;
			swap(idx[a[id1]], idx[a[i]]);
			swap(a[id1], a[i]);
		}
		
		cout << ans << "\n";
	}

}
