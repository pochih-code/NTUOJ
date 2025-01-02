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
    while ( n != 1 ) {
        cout << n << " -> " ;
        if ( n % 2 == 0 ) {
            n /= 2 ;
        }
        else {
            n = 3 * n + 1 ;
        }
    }
    cout << "1 -> end" ; 
    return 0 ;
}