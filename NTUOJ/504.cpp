# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
    ll int a, b, c, d ;
    cin >> a >> b >> c >> d ;
    cout << ( a + ( b * c ) ) % d << "\n" ;
    cout << fixed << setprecision(6) << (double) a / (double) b + (double) c / (double) d << "\n" ;
    cout << fixed << setprecision(6) << sin( ( a - b ) * ( acos(-1) / 180 ) ) * cos( ( c - d ) * ( acos(-1) / 180 )) << "\n" ;
    cout << fixed << setprecision(6) << sqrt( abs( a * b - c * d ) ) << "\n" ;
    cout << fixed << setprecision(6) << log10( a * b * c * d ) << "\n" ;
    return 0 ;
}