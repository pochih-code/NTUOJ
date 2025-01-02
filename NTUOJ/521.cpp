# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
    double a, b, c ;
    cin >> a >> b >> c ;
    if ( a >= 40 && b >= 40 && c >= 40 ) {
        if ( ( a + b + c ) / 3 >= 60 ) {
            if ( a >= 90 || b >= 90 || c >= 90 ) {
                cout << "Y" ;
            }
            else {
                cout << "N" ;
            }
        }
        else {
            cout << "N" ;
        }
    }
    else {
        cout << "N" ;
    }
    return 0 ;
}