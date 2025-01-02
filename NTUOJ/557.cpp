# include <bits/stdc++.h>
using namespace std ;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

string abc ( string n ){
    for ( int i = 0 ; i < n.size() / 2 ; i++ ){
        if ( n[i] != n[n.size() - 1 - i] ){
            return "No" ;
        }
    }
    return "Yes" ;
}

int main(){
    string word ;
    cin >> word ;
    cout << abc(word) ;
}