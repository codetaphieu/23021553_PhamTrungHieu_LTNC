#include <iostream>
#include <algorithm>
using namespace std;

// find lcm of integers in arr A and gcd in arr B
int gcd(int n, int m) {
    while(m != 0) {
        int tmp = n % m;
        n = m; m = tmp;
    }
    return n;
}
int lcm(int n, int m) {
    return n * m / gcd(n, m);
}
int main() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int resMin = 1;
    for(int i = 0; i < n; i++) {
        resMin = lcm(resMin, a[i]);
    }
    sort(b, b + m);
    int resMax = b[0];
    for(int i = 0; i < m; i++) {
        resMax = gcd(resMax, b[i]);
    }
    int cnt = 1;                //find res là các ước của gcd và bội của lcm
    int div = 0;
    while(resMin * cnt <= resMax) {
        if((resMax % (resMin * cnt)) == 0) {
            cnt ++;
        }
        else {
            div++;
            cnt++;
        }
    }
    cout << cnt - div - 1;
    return 0;
}
