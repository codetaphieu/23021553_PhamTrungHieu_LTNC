#include <iostream>

using namespace std;

void isPossible(int, int, int, int);

int main() {
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    isPossible(x1, v1, x2, v2);
    return 0;
}

void isPossible(int x1, int v1, int x2, int v2) {
    if((x1 > x2) && (v1 >= v2)){
        cout << "NO";
    }
    else if((x1 < x2) && (v1 <= v2)) {
        cout << "NO";
    }
    else {
        float k = 1.0 * (x1 - x2) / (v2 - v1);
        if (k == (int)k) {
            cout << "YES";
        }
        else cout << "NO";
    }
}
