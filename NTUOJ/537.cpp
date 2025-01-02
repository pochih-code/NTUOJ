#include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    long long A1, B1, C1 ;
    long long A2, B2, C2 ;
    long long n ;
    cin >> A1 >> B1 >> C1 ;
    cin >> A2 >> B2 >> C2 ;
    cin >> n ;

    long long maxhappiness = LLONG_MIN ;

    for ( long long x = 0 ; x <= n ; x++ ){
        long long y = n - x ;

        long long happiness1 = A1 * x * x + B1 * x + C1 ;
        long long happiness2 = A2 * y * y + B2 * y + C2 ;
        long long total = happiness1 + happiness2 ;

        maxhappiness = max(maxhappiness, total) ;
    }

    cout << maxhappiness << "\n" ;
    return 0 ;
}
