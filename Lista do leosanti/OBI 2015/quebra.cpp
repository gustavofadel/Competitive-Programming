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

const int N = 1e2 + 10;

char c;
int atual, d, e, n;
map<int, pair<char, int>> mapa;

int main () {_
    cin >> n;
    while (n--) {
        cin >> e >> c >> d;
        // mapa[posição atual] = {letra da posição atual, próxima posição}
        mapa[e] = mp(c, d);
    }
    // 0 é o começo
    atual = 0;
    // Enquanto não chega no 1 (que é o fim)
    while (atual != 1) {
        // Imprime a letra da posição atual
        cout << mapa[atual].fi;
        // E vai para a próxima posição
        atual = mapa[atual].se;
    }
    cout << "\n";
}