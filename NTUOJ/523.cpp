# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int a, b, c, d ;
    cin >> a >> b >> c >> d ;

    if ( a > 2 * c || b > c ) {
        if ( ( a >= d || b >= d ) ) {
            cout << "KATSU" ;
        }
        else {
            cout << "MAKE" ;
        }
    }
    else {
        cout << "MAKE" ;
    }
    
    return 0;
}