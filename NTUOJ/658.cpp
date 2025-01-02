# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

/* stack
push: 元素加入 top
pop: 元素移除 top
size: 元素數量
top: 取得 top 數量
*/
int main(){
    int n, m ;
    cin >> m ;
    stack <int> s ;
    for (int i = 0 ; i < m ; i++){
        int num ;
        cin >> num ;
        if (num == 1){
            int n ;
            cin >> n ;
            s.push(n) ;
        }
        if (num == 2){
            if (s.size() == 0){
                cout << "QQ\n" ;
            }
            else{
                s.pop() ;
            }
        }
        if (num == 3){
            if (s.size() == 0){
                cout << "QQ\n" ;
            }
            else{
                int ans = s.top() ;
                cout << ans << "\n" ;
            }
        }
        if (num == 4){
            int ans = s.size() ;
            cout << ans << "\n" ;
        }
    }
    return 0 ;
}