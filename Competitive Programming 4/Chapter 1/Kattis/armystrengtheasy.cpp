# include <bits/stdc++.h>

using namespace std;

# define _ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
# define MOD 1000000007
# define INF 0x3f3f3f3f
# define INFLL 0x3f3f3f3f3f3f3f3f
# define EPS 1e-9
# define PI 3.141592653589793238462643383279502884
# define pb push_back
# define pf push_front
# define fi first
# define se second
# define mp make_pair
# define sz(x) int(x.size())
# define all(x) x.begin(), x.end()
# define mset(x, y) memset(&x, (y), sizeof(x))

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> ii;

const int N = 5e2 + 10;

int g[N], m[N], ng, nm, t;

int main () {_
    cin >> t;
    while (t--) {
        cin >> ng >> nm;
        for (int i = 0; i < ng; i++) cin >> g[i];
        for (int i = 0; i < nm; i++) cin >> m[i];
        if (*max_element(g, g + ng) >= *max_element(m, m + nm)) cout << "Godzilla\n";
        else cout << "MechaGodzilla\n";
    }
}