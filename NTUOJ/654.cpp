# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

/* queue
push: 元素加入 tail
pop: 元素移除 head
size: 元素數量
front: 取得 head 元素
*/
int main(){
    int n, m ;
    cin >> m ;
    queue <int> q ;
    for (int i = 0 ; i < m ; i++){
        int num ;
        cin >> num ;
        if (num == 1){
            int n ;
            cin >> n ;
            q.push(n) ;
        }
        if (num == 2){
            if (q.size() == 0){
                cout << "QQ\n" ;
            }
            else{
                q.pop() ;
            }
        }
        if (num == 3){
            if (q.size() == 0){
                cout << "QQ\n" ;
            }
            else{
                int ans = q.front() ;
                cout << ans << "\n" ;
            }
        }
        if (num == 4){
            int ans = q.size() ;
            cout << ans << "\n" ;
        }
    }
    return 0 ;
}