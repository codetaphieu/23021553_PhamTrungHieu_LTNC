#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a; string b;
    getline(cin, a); getline(cin, b);
    int len1 = a.size();
    int len2 = b.size();
    cout << len1 << " " << len2 << endl;
    cout << a + b << endl;
    char pos = a[0];
    a[0] = b[0]; b[0] = pos;
    cout << a << " " << b;
    
    
    return 0;
}
