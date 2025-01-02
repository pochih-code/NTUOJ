# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
    int n ;
    cin >> n ;
    // n + 3
    // 2 * ( n + 3 ) - 5
    if ( ( 2 * n - 5 ) / 10 == 0 ) {
        cout << ( n + 3 ) % 10 ;
    }
    else {
        cout << ( 2 * n - 5 ) / 10 << ( n + 3 ) % 10 ;
    }
    return 0 ;
}