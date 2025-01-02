# include <bits/stdc++.h>
using namespace std ;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>
 
int main(){
    int even = 0, odd = 0 ;
    string s ;
    cin >> s ;
    for (int i = 0 ; i < s.size() ; i++ ){
        if (i % 2){
            odd += s[i] - '0' ;
        } else {
            even += s[i] - '0' ;
        }
    }
    cout << abs(even - odd) << "\n" ;
    return 0;
}