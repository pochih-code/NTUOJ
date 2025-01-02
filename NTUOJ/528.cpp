#include <bits/stdc++.h>
using namespace std;

# define fs first
# define sc second
# define ll long long
# define pll pair<long, long>
# define pii pair<int, int>

int main(){
  int a, b, c;
  int A = 0, B = 0, C = 0, D = 0;
  cin >> a >> b >> c;
  if(a != 0 && b != 0){
    A = 1;
  }
  if(a != 0 || b != 0){
    B = 1;
  }
  if(a == 0 && b != 0 || b == 0 && a != 0){
    C = 1;
  }
  if(A != c && B != c && C != c){
    D = 1;
  }
  if(D == 0){
    if(c == 0){
      if(A == c) cout << "AND" << "\n";
      if(B == c) cout << "OR" << "\n";
      if(C == c) cout << "XOR";
    }
    else{
      if(A == c) cout << "AND" << "\n";
      if(B == c) cout << "OR" << "\n";
      if(C == c) cout << "XOR";
    }
  }
  else{
    cout << "IMPOSSIBLE";
  }
}