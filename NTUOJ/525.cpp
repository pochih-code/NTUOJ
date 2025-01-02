# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int n, m ;
    cin >> n ;
    while ( n-- ) {  
        cin >> m ;
        if ( ( m + 1 ) / 2 % 2 ) {
            cout << "Bob\n" ;
        }
        else {
            cout << "Alice\n" ;
        }
    }
    return 0 ;
}