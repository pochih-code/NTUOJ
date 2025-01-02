# include <bits/stdc++.h>
using namespace std ;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
    char c ;
    cin >> c ;
    if ( (int)c >= 65 ){
        cout << (int)c - 55 ;
    }
    if ( (int)c <= 57 ){
        cout << (int)c - 48 ;
    }
    return 0 ;
}