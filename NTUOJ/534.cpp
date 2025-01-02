#include <bits/stdc++.h>
using namespace std;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int n, m , t, k = 0 ;
    cin >> n >> m ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> t ;
        if ( m == t ) {
            k += 1 ;
        }
    }
    if ( k == 0 ) {
        cout << "0" ;
    }
    else if ( k == n ) {
        cout << "2" ;
    }
    else {
        cout << "1" ;
    }
    
    return 0;
}