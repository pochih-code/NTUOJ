# include <bits/stdc++.h>
using namespace std ;

# define ll long long
# define fs first
# define sc second
# define pll pair<long, long>
# define pii pair<int, int>

struct Rectangle {
    int x, y, width, height;
};

bool isIntersecting(Rectangle r1, Rectangle r2) {
    // 檢查是否有一個矩形在另一個矩形的左邊或右邊
    if (r1.x + r1.width <= r2.x || r2.x + r2.width <= r1.x) {
        return false;
    }
    // 檢查是否有一個矩形在另一個矩形的上邊或下邊
    if (r1.y + r1.height <= r2.y || r2.y + r2.height <= r1.y) {
        return false;
    }
    return true;
}

int main() {
    Rectangle r1, r2;
    cin >> r1.x >> r1.y >> r1.width >> r1.height;
    cin >> r2.x >> r2.y >> r2.width >> r2.height;

    if (isIntersecting(r1, r2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
