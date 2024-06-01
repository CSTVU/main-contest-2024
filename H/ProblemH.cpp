/*
“There is nothing more deceptive than an obvious fact.”
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 5e4 + 10;
long long inF = 2.5e10 + 10;

bool mark[N];
long long ans;
queue<int > q;
vector<int > adj[N];
int A, B, S, n, m, dis[N], diss[N], diis[N];

void input() {
	cin >> A >> B >> S >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		adj[a].push_back(b), adj[b].push_back(a);
	}
}

void clear() {
	for (int i = 0; i < n; i++)
		mark[i] = false;
	while (q.size())
		q.pop();
}

void bfs(int u) {
	mark[u] = true;
	q.push(u);
	if (u == 0)		dis[u] = 0;
	if (u == 1)		diss[u] = 0;
	if (u == n - 1)		diis[u] = 0;
	while (! q.empty()) {
		int v = q.front();
		for (int i = 0; i < adj[v].size(); i++) {
			int w = adj[v][i];
			if (! mark[w]) {
				if (u == 0)		dis[w] = dis[v] + 1;
				if (u == 1)		diss[w] = diss[v] + 1;
				if (u == n - 1)		diis[w] = diis[v] + 1;
				mark[w] = true;
				q.push(w);
			}
		}
		q.pop();
	}
}

void solve() {
	ans = inF;
	clear(), bfs(0);
	clear(), bfs(1);
	clear(), bfs(n - 1);
	for (int i = 0; i < n; i++) 
		ans = min(ans, 1LL * dis[i] * A + 1LL * diss[i] * B + 1LL * diis[i] * S);
}

void output() {
	cout << ans << '\n';
}

int main() {
	ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
	input(), solve(), output();
	return 0;
}
