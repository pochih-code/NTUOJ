# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int a, b, x, y;
    cin >> a >> b >> x >> y;

    if ((a && x) || (b && y)) {
        cout << "MAKE\n" << endl;
    }
    else {
        cout << "KATSU\n" << endl;
    }

    return 0;
}