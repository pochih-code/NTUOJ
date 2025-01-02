# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
    ll int n, h, m, s ;
    cin >> n ;
    h = n / 3600 ;
    m = ( (n - ( 3600 * h ) ) / 60 ) ;
    s = n - 3600 * h - 60 * m ;
    cout << h << "\n" << m << "\n" << s << "\n" ;
    return 0 ;
}