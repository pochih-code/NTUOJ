#include <bits/stdc++.h>
using namespace std;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

int main() {
    ll int n, m;
    bool is_prime = true;
    cin >> n;
    m = (int)(sqrt(n));
    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime && n > 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}