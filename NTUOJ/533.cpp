#include <bits/stdc++.h>
using namespace std;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    unsigned ll int n, m, i = 0, j = 0 ;
    cin >> n ;
    while ( n-- ) {
        cin >> m ;
        if ( m > j ) {
            i = j ; // i 第二大
            j = m ; // j 第一大
        }
        else if ( m > i ) {
            i = m ;
        }
    }
    cout << i ;
    return 0;
}