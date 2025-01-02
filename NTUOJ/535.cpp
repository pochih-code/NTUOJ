#include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int A, B, C, n ;
    cin >> A >> B >> C >> n ;

    ll int maxSatisfaction = LLONG_MIN ;

    for (int x = 0 ; x <= n ; x++ ){
        // ¦ì²¾¹Bºâ­pºâ 2^x
        ll int power = (1LL << x) ;
        
        ll int satisfaction = A * power + B * (long long)x * x * x + C * x ;

        maxSatisfaction = max(maxSatisfaction, satisfaction) ;
    }

    cout << maxSatisfaction << "\n" ;
    return 0 ;
}
