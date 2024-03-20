#include <iostream>
#include <string>

using namespace std;
bool isHackerrank(string s) {
    string target = "hackerrank";
    int n = s.length();
    int index = 0;
    for(int i = 0; i < n; i ++) {
        if(s[i] ==  target[index]) {
            index ++;
            if(index == 9) return true;
        }
    }
    return false;
}

int main() {
    int q; cin >> q;
    cin.ignore();
    for(int cnt = 0; cnt < q; cnt++) {
        string s; getline(cin, s);
        if(isHackerrank(s) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
