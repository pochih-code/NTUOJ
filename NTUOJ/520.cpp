# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
    double a, b, c, grade ;
    cin >> a >> b >> c ;
    grade = ( a + b + c ) / 3 ;
    if ( grade >= 90 ) {
        cout << "A+" ;
    }
    if ( grade >= 85 && grade < 90 ) {
        cout << "A" ;
    }
    if ( grade >= 80 && grade < 85 ) {
        cout << "A-" ;
    }
    if ( grade >= 77 && grade < 80 ) {
        cout << "B+" ;
    }
    if ( grade >= 73 & grade < 77 ) {
        cout << "B" ;
    }
    if ( grade >= 70 & grade < 73 ) {
        cout << "B-" ;
    }
    if ( grade < 70 ) {
        cout << "F" ;
    }
    return 0 ;
}