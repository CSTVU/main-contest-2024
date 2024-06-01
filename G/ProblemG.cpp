#include<bits/stdc++.h> 
using namespace std; 
#define mp make_pair 
#define pb push_back 
#define fi first 
#define se second 
typedef long long ll; 
typedef pair<ll,ll> pii; 
 
const int N = 1e5 + 10; 
int n, x, m, tmp, ans, k, t; 
int a[N], b[N], h[N]; 
string s, p; 
string v[N]; 
bool mark[N]; 
 
void read_input() { 
	cin >> s >> p;
 n = p.size(); 
 for (int i = 0; i < n; i++) { 
  a[p[i]]++; 
 } 
 for (int i = 0; i + n <= s.size(); i++) { 
  for(int j = i; j < i + n; j++) { 
   v[i].pb(s[j]); 
  } 
 } 
/* for (int i = 0; i + n <= s.size(); i++) { 
  cout << v[i] << '\n'; 
 }*/ 
/* for (int i = 'a'; i <= 'z'; i++) { 
  cout << a[i] << ' '; 
 }*/ 
} 
 
bool check(string s) { 
 for (int i = 'a'; i <= 'z'; i++) { 
  b[i] = 0; 
 } 
 for (int i = 0; i < s.size(); i++) { 
  b[s[i]]++; 
 } 
 for (int i = 'a'; i <= 'z'; i++) { 
//  cout << b[i] << ' ' << a[i] << '\n'; 
  if (b[i] > a[i]) { 
   return false; 
  } 
 } 
 return true; 
} 
 
int main()  
{ 
 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
 read_input(); 
 for (int i = 0; i + n <= s.size(); i++) { 
  ans += check(v[i]); 
//  cout << check(v[i]) << ' '; 
 } 
 cout << ans; 
 return 0; 
}
