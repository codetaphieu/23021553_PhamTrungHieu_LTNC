#include <iostream>

using namespace std;

int turnPages(int, int);

int main() {
    int n, p; cin >> n >> p;
    int res = turnPages(n, p);
    cout << res;
    return 0;
}

int turnPages(int n,int p) {
    float res = 0;
    float copN = 0, copP = 0;
    if(n % 2 == 0) copN = n + 0.5;                  //đưa n và p về số chính giữa 2 mặt giấy - là số bán nguyên
    else copN = n - 0.5;
    if(p % 2 == 0) copP = p + 0.5;
    else copP = p - 0.5;
    
    if((copN - copP) >= (copP - 0.5)) {
        res = (copP / 2);
    }
    else res = (copN - copP) / 2;
    return int(res);
}
