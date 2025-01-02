# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
    ll int a, b ;
    cin >> a >> b ;
    if ( a % b < 0 ) {
        cout << a % b + b ;
    }
    else {
        cout << a % b ;
    }
    return 0 ;
}