#include <bits/stdc++.h>
using namespace std;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int a, b, c ;
    cin >> a >> b >> c ;
    if ( a > b ) {
        swap(a, b) ;
    }
    if ( b > c ) {
        swap(b, c) ;
    }
    if ( a > b ) {
        swap(a, b) ;
    }
    if ( a + b > c ) {
        if ( a * a + b * b < c * c ) {
            cout << "Obtuse" ;
        } 
        if ( a * a + b * b == c * c ) {
            cout << "Right" ;
        }
        if ( a * a + b * b > c * c ) {
            cout << "Acute" ;
        }
    }
    else {
        cout << "Oh! No!" ;
    }
    return 0 ;
}