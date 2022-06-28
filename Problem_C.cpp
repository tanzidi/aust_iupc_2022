#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N = 1e5 + 5;
map<int, int> g[N];

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  	int t, cs = 1; cin >> t;
  	while (t--) {
  		int n, m; cin >> n >> m;
  		for (int i = 0; i < m; i++) {
  			int u, v, w; cin >> u >> v >> w;
  			if (g[u][v] == 0) g[u][v] = w;
  			else g[u][v] = min(g[u][v], w);
  			if (g[v][u] == 0) g[v][u] = w;
  			else g[v][u] = min(g[v][u], w);
  		}
  		/*for (int i = 1; i <= n; i++) {
  			cout << i << ": ";
  			for (auto it : g[i]) cout << it.first << " ";
  			cout << "\n";
  		}*/
  		ll mn = 1e18;
  		for (int i = 1; i <= n; i++) {
  			if (g[i].size() == n - 1) {
  				ll cur = 0;
  				for (auto it : g[i]) {
  					cur += it.second;
  				}
  				mn = min(mn, cur);
  			}
  		}
  		cout << "Case " << cs++ << ": ";
  		if (mn == 1e18) cout << "Impossible\n";
  		else cout << mn << "\n";
  		for (int i = 1; i <= n; i++) g[i].clear();
  	}

}
