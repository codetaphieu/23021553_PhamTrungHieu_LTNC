#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxOfFour(int a, int b, int c, int d){
    return max(a, max(b, max(c, d)));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << maxOfFour(a, b, c, d);
    return 0;
}
