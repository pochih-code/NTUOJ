#include <bits/stdc++.h>
using namespace std;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int n ;
    cin >> n ;
    if ( n == 0 ) {
        cout << n ;
    }
    while ( n != 0 ) {
        cout << n % 2 ;
        n /= 2 ;
    }
    return 0 ;
}