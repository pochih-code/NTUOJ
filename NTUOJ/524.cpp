# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int a, b, c ;
    cin >> a >> b >> c ;
    if ( a == 0 ) {
        if ( b == 1 ) {
            if ( c == 1 || c == 2 ) {
                cout << "5" ;
            }
            if ( c == 3 || c == 4 ) {
                cout << "6" ;
            }
            if ( c == 5 || c == 6 ) {
                cout << "7" ;
            }
        }
        else {
            cout << "8" ;
        }
    }
    if ( a == 1 ) {
        if ( b == 1 ) {
            if ( c == 1 || c == 2 ) {
                cout << "1" ;
            }
            if ( c == 3 || c == 4 ) {
                cout << "2" ;
            }
            if ( c == 5 || c == 6 ) {
                cout << "3" ;
            }
        }
        else {
            cout << "4" ;
        }
    }
    return 0;
}