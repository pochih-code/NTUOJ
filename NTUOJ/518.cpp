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
    cout << n / 600 << " " << n - ( n / 600 ) * 600 ;
    return 0 ;
}